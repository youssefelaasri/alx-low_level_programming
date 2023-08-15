#include "main.h"
/**
  *print_last_digit - func
  *Return: return func
  *@n: para
  */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -1 * n;
	ld = n % 10;
	_putchar('0' + ld);
	return (ld);
}

