#ifndef __midoperator__
#define __midoperator__

#include "operatorNode.hpp"

class MidOperator : public OperatorNode
{
private:
	std::vector<int> childsValues;
public:
	MidOperator(int index_ , int parentIndex_): OperatorNode(index_, parentIndex_) {};
	int evaluate();
};



#endif