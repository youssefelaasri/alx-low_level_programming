#include "main.h"
/**
  *_puts - fun
  *@str: para
  */

void _puts(char *str)
{
	char i;
	int j = 0;

	for (i = str[0]; i != '\0'; i = *(str + ++j))
	{
		_putchar(i);
	}
	_putchar('\n');
}
