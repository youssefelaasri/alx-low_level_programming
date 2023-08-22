#include "main.h"
#include <stdio.h>
/**
  *print_array - fun
  *@a: array
  *@n: number of elem o print
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
