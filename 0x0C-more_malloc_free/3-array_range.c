#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*array_range - fun
*@min: miimum
*@max: max
*Return: depends
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			p[i - min] = i;
		}
		return (p);
	}
}
