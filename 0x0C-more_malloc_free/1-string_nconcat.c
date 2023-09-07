#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*string_nconcat - our fn
*@s1: string 1
*@s2: string 2
*@n: number
*Return: depends
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l = strlen(s1) + strlen(s2);
	p = malloc(l + n);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(p, s1);
		strncat(p, s2, n);
		return (p);
	}


}
