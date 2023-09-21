#include <stdio.h>
#include "lists.h"

/**
*_strlen - fun
*@str: string
*Return: ret
*/
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

/**
*print_list - fun
*@h: struct
*Return: dep
*/
size_t print_list(const list_t *h)
{
	int c = 0;
	int j = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	ptr = h;
	while (ptr != NULL)
	{
		c++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			j = _strlen(ptr->str);
			printf("[%d] %s\n", j, ptr->str);
		}
		ptr = ptr->next;
	}
	return (c);
}
