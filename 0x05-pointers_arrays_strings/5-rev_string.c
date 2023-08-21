#include "main.h"
#include <stdio.h>
/**
  *_strlen - fun
  *@s: para
  *Return: return
  */

int _strlen(char *s)
{
	int count = 0;
	char i;

	for (i = s[0]; i != '\0'; i = s[count])
	{
		count++;
	}
	return (count);
}

/**
  *rev_string - fun
  *@s: strin
  */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
