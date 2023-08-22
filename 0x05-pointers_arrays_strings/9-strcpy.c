#include "main.h"
/**
  *_strcpy - fun
  *@dest: arr
  *@src: para
  *Return: return des
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char c;
	for (c = src[0]; c != '\0'; c = *(src + i))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
