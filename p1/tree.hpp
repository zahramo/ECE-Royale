#ifndef __tree__
#define __tree__

#include <vector>
#include "node.hpp"
#include "addOperator.hpp"
#include "midOperator.hpp"
#include "multipleOperator.hpp"
#include "notOperator.hpp"
#include "operand.hpp"

#define NO_PARENT -1

enum OperatorType { Add, Multiply, Not, Median};

class Tree {
private:
	std::vector<Node*> nodes;
public:
	void add_number_node(int index, int parent_index, int value);
	void add_operator_node(int index, int parent_index, OperatorType type);
	int evaluate();
	int findParent(int);
	int findRoot();
	void checkIndex(int);
};

#endif