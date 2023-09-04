#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*_strdup - func
*@str: string
*Return: depends
*/
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return NULL;
	}
	char *p = malloc(strlen(str) + 1);


	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(p, str);
		return (p);
	}

}
