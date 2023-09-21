#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *_strlen - fun
  *@s: dtri
  *Return: ret
  */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
/**
*add_node - fun
*@head: header
*@str: strin
*Return: dep
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *pr = malloc(sizeof(list_t));
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	if (pr == NULL)
	{
		return (NULL);
	}
	pr->str = strdup(str);
	if (pr->str == NULL)
	{
		return (NULL);
	}
	pr->len = len;
	pr->next = *head;
	*head = pr;
	return (pr);
}

