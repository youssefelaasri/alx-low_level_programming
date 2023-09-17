#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*str_concat - fun
*@s1: s1
*@s2: 2
*Return: depds
*/
char *str_concat(char *s1, char *s2)
{
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
		if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc(strlen(s1) + strlen(s2) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(p, s1);
		strcat(p, s2);
		return (p);
	}
}
