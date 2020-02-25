#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "util.hpp"

using namespace Easy;
int Easy::findposition(char *h, int i, bool j, char l)
{
	int k;
	int y = 1;
	if (j == true)
	{
		k = 1;
	}
	else
	{
		k = -1;
	}
	while (y == 1)
	{
		if (h[i + k] != l)
		{

			i = i + k;
		}
		else
		{
			y = 2;
		}
	}
	return i;
}
void Easy::hello()
{
	printf("Hello");
}