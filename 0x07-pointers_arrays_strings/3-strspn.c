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
	unsigned int c = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c = c + 1;
			}
		}
	}
	return (c);
}
