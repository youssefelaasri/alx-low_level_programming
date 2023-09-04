#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*creat_array - fum
*@size: size
*@c: char
*Return: depends
*/
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	
	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}