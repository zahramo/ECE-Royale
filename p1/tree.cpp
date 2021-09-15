#include "tree.hpp"
#include <iostream>

class BadTreeException {};
class BadIndex {};
class BadParent {};

void Tree :: add_number_node(int index, int parent_index, int value)
{
	try
	{
		checkIndex(index);

		Operand* newNode = new Operand(index, parent_index , value);
		nodes.push_back(newNode);
		int parentLocation;

		parentLocation = findParent(parent_index);
		nodes[parentLocation]->addChild(newNode);
	} catch (BadTreeException e)
	{
		std::cout << "error" << std::endl;
	}
	catch (BadIndex e)
	{
		std::cout << "repeated index" << std::endl;
	}
	catch (BadParent e)
	{
		std::cout << "invalid parent" << std::endl;
	}
}

void Tree :: add_operator_node(int index, int parent_index, OperatorType type)
{
	try
	{
		checkIndex(index);
		int parentLocation;
		parentLocation = findParent(parent_index);
		OperatorNode *newNode;
		if (type == Add)
		{
			newNode = new AddOperator(index, parent_index);
		}
		else if (type == Not)
		{
			newNode = new NotOperator(index, parent_index);
		}
		else if (type == Multiply)
		{
			newNode = new MultipleOperator(index, parent_index);
		}
		else if (type == Median)
		{
			newNode = new MidOperator(index, parent_index);
		}
		nodes.push_back(newNode);

		if (parent_index != NO_PARENT)
			nodes[parentLocation]->addChild(newNode);
	} catch (BadTreeException e)
	{
		std::cout << "error" << std::endl;
	}
	catch (BadIndex e)
	{
		std::cout << "repeated index" << std::endl;
	}
	catch (BadParent e)
	{
		std::cout << "invalid parent" << std::endl;
	}
}

int Tree :: evaluate()
{
	int rootLocation;
	try
	{
		rootLocation = findRoot();

		return nodes[rootLocation]->evaluate();
	} catch (BadTreeException e1)
	{
		std::cout << "root is not exist!";
	}
}

int Tree :: findParent(int parentIndex)
{
	for (int i = 0; i < nodes.size() ; i++)
	{
		if (nodes[i]->getIndex() == parentIndex)
		{
			Operand* operand = dynamic_cast<Operand*>(nodes[i]);
			if (operand)
			{
				throw (BadParent());
			}
			return i;
		}
	}

}

int Tree :: findRoot()
{
	for (int i = 0 ; i < nodes.size() ; i++)
	{
		if (nodes[i]->getParentIndex() == NO_PARENT)
		{
			return i;
		}
	}
	throw BadTreeException();
}

void Tree :: checkIndex(int index)
{
	for (int i = 0 ; i < nodes.size() ; i++)
	{
		if (index == i)
			throw BadIndex();
	}
}