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
	_putchar('0' + (n % 10));
	return (n % 10);
}

