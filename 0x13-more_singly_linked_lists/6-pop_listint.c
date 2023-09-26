#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*pop_listint - fun
*@head: head
*Return: Depends
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;

	d = (*head)->n;

	*head = (*head)->next;
	free(tmp);
	return (d);

}
