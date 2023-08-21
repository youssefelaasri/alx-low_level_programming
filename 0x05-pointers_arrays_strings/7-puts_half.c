#include <stdio.h>
#include "main.h"
/**
  *len - fun
  *@s: para
  *Return: return
  */
int len(char *s)
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
  *puts_half - put fjlf fun
  *@str: string
  */
void puts_half(char *str)
{
	int i;
	int l = len(str);

	if (l % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = l / 2 + 1; i < l; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
