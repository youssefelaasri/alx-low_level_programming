#include "main.h"
/**
  *_memset - fun
  *@s: stri
  *@b: chara
  *@n: number
  *Return: return
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
