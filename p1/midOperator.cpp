#include "midOperator.hpp"
#include <algorithm>

int MidOperator :: evaluate()
{
	int median = 0;
	for (int i = 0; i < childs.size() ; i++)
	{
		childsValues.push_back(childs[i]->evaluate());
	}
	std::sort(childsValues.begin(), childsValues.end());
	if (childsValues.size() % 2 == 1)
	{
		median = childsValues[childsValues.size() / 2 ];
	}
	else
	{
		median = (childsValues[childsValues.size() / 2 ] + childsValues[childsValues.size() / 2 - 1 ]) / 2;
	}
	return median;
}