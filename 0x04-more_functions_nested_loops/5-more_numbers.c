#include "main.h"
/**
  *more_numbers - fun
  */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{

			if (j >= 58)
			{
				for (k = 0; k < 1; k++)
				{
					j = 48;
				}
				_putchar('0' + 1);
			}
			_putchar(j);
		}
		_putchar('\n');
	}
}
