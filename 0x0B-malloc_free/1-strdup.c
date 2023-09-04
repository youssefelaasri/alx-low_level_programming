#include "main.h"
#include <string.h>
#include <stdlib.h>


char *_strdup(char *str)
{
	int i = strlen(str);
	char *p = malloc(i);

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
		p = str;
		return (p);
	}

}
