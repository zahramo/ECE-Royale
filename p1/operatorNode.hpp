#ifndef __operatorNode__
#define __operatorNode__

#include "node.hpp"

class OperatorNode : public Node {
protected:
	std::vector<Node*> childs;
public:
	OperatorNode(int index_ , int parentIndex_) : Node(index_, parentIndex_) {};
	virtual void addChild(Node*);
};

#endif