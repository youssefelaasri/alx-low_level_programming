#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
*_realloc - fun
*@ptr: ptr
*@old_size: old
*@new_size: new
*Return: depends
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		memcpy(p, ptr, old_size);
		free(ptr);
		return (p);
	}
	return (NULL);
}
