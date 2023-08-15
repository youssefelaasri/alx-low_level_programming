#include "main.h"
/**
  *print_last_digit - func
  *Return: return func
  *@n: para
  */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;
	int ld;

	ld = n % 10;
	_putchar('0' + ld);
	return (ld);
}

