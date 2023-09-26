#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*print_listint - fun
*@h: head
*Return: return c
*/

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
