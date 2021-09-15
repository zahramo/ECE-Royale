#ifndef __operand__
#define __operand__

#include "node.hpp"

class Operand : public Node {
private:
	int value;
public:
	Operand(int index_ , int parentIndex_, int value_) : Node(index_, parentIndex_) {
		value = value_;
	};

	int evaluate();
};

#endif

