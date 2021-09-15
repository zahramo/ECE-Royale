#ifndef __node__
#define __node__

#include <vector>

class Node {
protected:
	int index , parentIndex;
public:
	Node(int index_ , int parentIndex_);
	virtual int getIndex();
	virtual int getParentIndex();
	virtual int evaluate() = 0;
	virtual void addChild(Node* newChild) {};
};

#endif