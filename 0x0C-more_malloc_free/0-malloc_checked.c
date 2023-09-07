#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit (98);
	}
	else
	{
		return (p);
	}
}