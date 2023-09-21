#include <stddef.h>
#include <stdio.h>
/**
*array_iterator - function
*@array: our arra
*@size: size
*@action: acttttion
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
