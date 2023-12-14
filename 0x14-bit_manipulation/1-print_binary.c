#include "main.h"
#include <stdio.h>
/**
*rec -rec
*@n: num
*Return: nothimg
*/
void rec(unsigned long int n)
{
	int rem = 0;

	if (n == 0)
	{
		return;
	}
	else
	{
		rec(n >> 1);
		rem = n - ((n >> 1) * 2);
		_putchar(rem + '0');
	}
}
/**
*print_binary - fun
*@n: num
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(0 + '0');
	else
		rec(n);
}
