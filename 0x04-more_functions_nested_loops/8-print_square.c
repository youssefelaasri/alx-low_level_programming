#include "main.h"
/**
  *print_square - our func
  *@size: size of our square
  */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar(*\n');
	}
}
