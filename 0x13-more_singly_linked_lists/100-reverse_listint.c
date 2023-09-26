#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*reverse_listint - fun
*@head: head
*Return:  dpe
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nex, *pre;

	while (*head != NULL)
	{
		nex = (*head)->next;
		(*head)->next=pre;
		pre = *head;
		*head = nex;
	}
	*head = pre;
	return (*head);
}