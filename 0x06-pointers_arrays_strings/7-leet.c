#include "main.h"
/**
  *leet - fun
  *@s: para
  *Return: returm
  */
char *leet(char *s)
{
	int i = 0;
	char c;

	for (c = s[0]; c != '\0'; c = *(s + i))
	{
		if (c == 'a')
			s[i] = '4';
		if (c == 'A')
			s[i] = '4';
		if (c == 'e')
			s[i] = '3';
		if (c == 'E')
			s[i] = '3';
		if (c == 'o')
			s[i] = '0';
		if (c == 'O')
			s[i] = '0';
		if (c == 't')
			s[i] = '7';
		if (c == 'T')
			s[i] = '7';
		if (c == 'l')
			s[i] = '1';
		if (c == 'L')
			s[i] = '1';
		i++;
	}
	return (s);
}
