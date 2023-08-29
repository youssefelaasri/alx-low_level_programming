#include <stdio.h>
#include "main.h"
/**
  *_strspn - fun
  *@s: srin
  *@accept: substring
  *Return: numb
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int seen;
	unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		seen = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (seen == 1)
				break;
			if (s[i] == accept[j])
			{
				c++;
				seen = 1;
			}
		}
	}
	return (c);
}
