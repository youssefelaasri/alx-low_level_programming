#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*list_len - fun
*@h: str
*Return: ret
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
