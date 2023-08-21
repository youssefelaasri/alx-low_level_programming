#include "main.h"

int len(char *s)
{
	char i;
	int count = 0;

	for (i = s[0]; i != '\n'; i = *(s + count))
		count++;
	return (count);
}
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
