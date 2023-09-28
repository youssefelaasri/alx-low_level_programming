#include "main.h"
#include <stdio.h>

/**
*print_binary - fun
*@n: num
*Return: nohing
*/
void print_binary(unsigned long int n)
{
	int rem = 0;

	if (n == 0)
	{
		return;
	}
	else
	{
		print_binary(n >> 1);
		rem = n - ((n >> 1) * 2);
		_putchar(rem + '0');
	}
}
