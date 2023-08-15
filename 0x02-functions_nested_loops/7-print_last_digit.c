#include "main.h"
/**
  *print_last_digit - func
  *Return: return func
  *@n: para
  */
int print_last_digit(int n)
{
	int ld;

	if (ld < 0)
	{
		ld = -1 * ld;
	}
	ld = n % 10;
	_putchar('0' + ld);
	return (ld);
}

