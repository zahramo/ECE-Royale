#include "multipleOperator.hpp"

int MultipleOperator :: evaluate()
{
	return childs[0]->evaluate() * childs[1]->evaluate();
}