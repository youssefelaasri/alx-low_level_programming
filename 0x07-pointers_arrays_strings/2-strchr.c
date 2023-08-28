#include <stddef.h>
#include "main.h"

/**
  *_strchr - fun
  *@s: string
  *@c: char
  *Return: depwnds
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else
		{
			continue;
		}
	}
	return (NULL);
}
