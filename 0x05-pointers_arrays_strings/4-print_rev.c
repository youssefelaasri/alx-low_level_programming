#include "main.h"
/**
  *_strlen - fun
  *@s: para
  *Return: return
  */
int _strlen(char *s)
{
	char i;
	int count = 0;

	for (i = s[0]; i != '\0'; i = *(s + count))
	{
		count++;
	}
	return (count);
}

/**
  *print_rev - fun
  *@s: para
  */

void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
