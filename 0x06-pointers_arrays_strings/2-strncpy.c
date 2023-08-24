#include "main.h"
/**
  *_strncpy - fun
  *@dest: first para
  *@src:secon para
  *@n: third oara
i  *Return: return
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
