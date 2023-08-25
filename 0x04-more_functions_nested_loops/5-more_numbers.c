#include "main.h"
/**
  *more_numbers - fun
  */
void more_numbers(void)
{
	int i, j;
	int l = 10;
	int k = 0;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= l; j++)
		{
			if (j == 10)
			{
				j = 0;
				l = 4;
			}
			if (k > 9)
			{
				_putchar('0' + 1);
			}
			_putchar('0' + j);
			k++;
		}
		_putchar('\n');
		k = 0;
		l = 10;
	}
}
