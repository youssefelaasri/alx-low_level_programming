#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_lisint - fun
*@head: hed
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;
	
	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}