#ifndef __notOperator__
#define __notOperator__

#include "operatorNode.hpp"

class NotOperator : public OperatorNode {
private:

public:
	NotOperator(int index_ , int parentIndex_): OperatorNode(index_, parentIndex_) {};
	int evaluate();
};

#endif