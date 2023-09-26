#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_listint2 - fun
*@head: hed
*/
void free_listint2(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
	*head = NULL;
}
