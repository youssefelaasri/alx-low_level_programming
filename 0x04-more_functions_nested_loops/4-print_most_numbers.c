#include "main.h"
/**
  *print_most_numbers - print unc
  */

void print_most_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar('0' + i);
	}
	_putcahr('\n');
}
