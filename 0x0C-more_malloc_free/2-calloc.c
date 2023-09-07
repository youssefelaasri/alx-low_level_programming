#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
*_calloc - fun
*@nmemb: num
*@size: size of
*Return: dep
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	int *pp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	pp = p;
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb * size; i = i + size)
		{
			pp[i] = 0;
		}
		return (p);
	}
}
