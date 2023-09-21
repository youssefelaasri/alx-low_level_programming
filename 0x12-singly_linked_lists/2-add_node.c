#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*add_node - fun
*@head: header
*@str: strin
*Return: dep
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *pr = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}

	if (pr == NULL)
	{
		return (NULL);
	}
	pr->str = strdup(str);
	if (pr->str == NULL)
	{
		return (NULL);
	}
	pr->next = *head;
	*head = pr;
	return (pr);
}

