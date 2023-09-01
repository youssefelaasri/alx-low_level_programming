#include "main.h"
/**
  *_strlen - fun
  *@s: our para
  *Return: return func
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

