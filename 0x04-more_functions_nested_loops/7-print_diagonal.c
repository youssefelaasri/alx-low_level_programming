#include "main.h"
/**
  *print_diagonal - our fun
  *@n: para
  */
void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (k = 0; k < i - 1; k++)
			{
				if (i == 1)
					continue;
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
