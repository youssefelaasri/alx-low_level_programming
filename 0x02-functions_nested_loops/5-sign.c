#include "main.h"

/**
  *print_sign - func
  *Return: cc
  *@n: para
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
