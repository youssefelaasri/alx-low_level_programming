#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
*_calloc - fun
*@nmemb: num
*@size: size of
*Return: dep
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(p, 0, nmemb * size);
		return (p);
	}
}
