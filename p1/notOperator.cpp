#include "notOperator.hpp"

int NotOperator::evaluate()
{
	return (-1) * childs[0]->evaluate();
}