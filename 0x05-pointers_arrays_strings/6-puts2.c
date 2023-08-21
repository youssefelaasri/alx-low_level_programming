#include "main.h"

void puts2(char *str)
{
	char i;
	int j = 0;

	for (i = str[0]; i != '\0'; i = *(str + j))
	{
		_putchar(i);
		j += 2;
	}
	_putchar('\n');
}
