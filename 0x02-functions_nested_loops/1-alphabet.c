#include <stdio.h>
/**
  *print_alphabet
  *Return: 0
  *@c: para
  */
void print_alphabet(void)
{
	char i;

	for (i='a'; i<= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
