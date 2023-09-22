#include "lists.h"
#include <stdlib.h>
/**
*free_list - our function
*@head: our list
*/
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
