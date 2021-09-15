#include "node.hpp"

Node :: Node(int index_ , int parentIndex_)
{
	index = index_;
	parentIndex = parentIndex_;
}

int Node :: getIndex()
{
	return index;
}

int Node :: getParentIndex()
{
	return parentIndex;
}
