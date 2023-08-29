#include <stdio.h>
#include "main.h"
/**
  *print_diagsums - fun
  *@a: arr
  *@size: arr size
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	int k = 0;
	int l = 0;

	for (i = 0; i < size; i++)
	{
		 k = k + a[i][i];
		 printf("%d, ", k);
	}

	j = size;

	for (i = 0; i < size; i++)
	{
		l = l + a[i][j];
		j--;
		printf("%d", l);
	}
}
