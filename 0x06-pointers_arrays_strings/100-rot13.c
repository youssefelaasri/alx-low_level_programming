#include "main.h"

char *rot13(char *s)
{
	char c, b;
	int i = 0;

	for (c = s[i]; c != '\0'; c = *(s + i))
	{
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			b = '13';
			s[i] = c + b;
		}
		else
		{
			b = '13';
			s[i] = c - b;
		}
		i++;
	}
	return (s);
}
