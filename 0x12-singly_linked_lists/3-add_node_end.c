#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  *_strlen - our fun
  *@s: our to dtri
  *Return: return count
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
 *add_node_end - our fun
 *@head: our header
 *@str: string
 *Return: returns depends
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int len;


	if (str == NULL)
		return (NULL);
	len = _strlen(str);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->len = len;
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}

	return (temp);
}
