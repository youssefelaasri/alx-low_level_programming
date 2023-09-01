#include "main.h"
/**
  *_strlen - fun
  *@s: para
  *Return: return
  */
int _strlen(char *s)
{
	int i = 0;
	char c;

	for (c = s[0]; c != '\0'; c = *(s + i))
		i++;
	return (i);
}
/**
  *_strncat - fun
  *@dest: para 1
  *@src: para 2
  *@n: para 3
  *Return: ret
  */
char *_strncat(char *dest, char *src, int n)
{
	int id = _strlen(dest);
	int i;

	for (i = 0; i < n; i++)
	{
		dest[id + i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
