#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_listint - fun
*@head: head
*Return: dep
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}