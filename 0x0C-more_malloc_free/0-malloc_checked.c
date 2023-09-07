#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - fun
*@b: size
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
