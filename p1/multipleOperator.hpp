#ifndef __multipleoperator__
#define __multipleoperator__

#include "operatorNode.hpp"

class MultipleOperator : public OperatorNode {
private:
public:
	MultipleOperator(int index_ , int parentIndex_): OperatorNode(index_, parentIndex_) {};
	int evaluate();
};

#endif