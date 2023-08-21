#include "main.h"

/**
  *puts2 - fun
  *@s: para
  *Return: return count
  */
int _strlen(char *s);
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
  *_strlen - fun 2
  *@s: para 2
  *Return: returns count
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
