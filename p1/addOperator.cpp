#include "addOperator.hpp"

int AddOperator :: evaluate()
{
	return childs[0]->evaluate() + childs[1]->evaluate();
}