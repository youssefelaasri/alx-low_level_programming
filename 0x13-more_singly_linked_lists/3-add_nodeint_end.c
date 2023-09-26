#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end - fun
*@head: head
*@n: data
*Return: depe
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}

	return (new);
}
