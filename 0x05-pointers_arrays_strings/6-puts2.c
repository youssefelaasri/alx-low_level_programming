#include "main.h"
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
