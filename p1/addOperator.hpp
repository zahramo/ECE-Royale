#ifndef __addoperator__
#define __addoperator__

#include "operatorNode.hpp"
#include "node.hpp"

class AddOperator : public OperatorNode {
private:

public:
	AddOperator(int index_ , int parentIndex_): OperatorNode(index_ , parentIndex_) {};
	int evaluate();
};

#endif