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
		return (1);
		_putchar('+');
	}
	else if(n == 0)
	{
		return (0);
		_putchar('0' + 0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
