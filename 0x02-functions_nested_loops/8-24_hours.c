#include "main.h"
/**
  *jack_bauer - func
  *Return: return func
  */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{	
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b ==  4 && c == 0 && d == 0)
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
				}
			}
		}
	}
}
