#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - fun
*@width: ei
*@height: heth
*Return: dep
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height == 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int *));
			for (j = 0; j < width; j++)
			{
				p[i][j] = 0;
			}
		}
	}
	return (p);
}
