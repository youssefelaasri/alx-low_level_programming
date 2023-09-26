#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*get_nodeint_at_index - fun
*@head: head
*@index: index
*Return: dp
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;

	while (i < index && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
