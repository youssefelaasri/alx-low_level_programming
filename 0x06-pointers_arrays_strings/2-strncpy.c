#include "main.h"
/**
  *_strncpy - fun
  *@dest: first para
  *@src:secon para
  *@n: third oara
  *Return: return
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
