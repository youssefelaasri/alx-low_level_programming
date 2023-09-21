#include <stdio.h>
#include "lists.h"



/**
*print_list - fun
*@h: struct
*Return: dep
*/
size_t print_list(const list_t *h)
{
	int c = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		c++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (c);
}
