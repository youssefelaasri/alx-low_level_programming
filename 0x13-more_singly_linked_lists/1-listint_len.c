#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*listint_len - fun
*@h: head
*Return: ret c
*/
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
