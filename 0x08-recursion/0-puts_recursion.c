#include "main.h"
/**
  *_puts_recursion - fun
  *@s: string
  *Return: return depends
  */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(s[i]);
	i++;
	s++;
	_puts_recursion(s);
	}
}
