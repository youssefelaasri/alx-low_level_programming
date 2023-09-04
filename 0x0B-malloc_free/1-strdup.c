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
	char *p = malloc(strlen(str));

		if (str == NULL)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		p = strcpy(p, str);
		return (p);
	}

}
