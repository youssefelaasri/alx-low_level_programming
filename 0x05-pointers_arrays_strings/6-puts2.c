#include "main.h"
int _strlen(char *s);
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i <= len; i = i + 2)
	{
		_putchar(i);
	}
	_putchar('\n');
}
