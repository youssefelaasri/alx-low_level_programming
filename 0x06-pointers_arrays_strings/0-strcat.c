#include "main.h"
/**
  *_strlen - fun
  *@s: para
  *Return: return 
  */
int _strlen(char *s)
{
	int count = 0;
	char c;

	for (c = s[0]; c != '\0'; c = *(s + count))
	{
		count++;
	}
	return (count);
}
/**
  *_strcat - fun
  *@dest: first para
  *src: second para
  *Return: return
  */
char *_strcat(char *dest, char *src)
{
	int dlen = _strlen(dest);
	char c;
	int i = 0;

	for (c = src[0]; c != '\0'; c = *(src + i))
	{
		dest[dlen + i] = c;
		i++;
	}
	return (dest);
}
