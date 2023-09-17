#include <stdio.h>
#include "dog.h"
/**
*print_dog - fun
*@d: struc
*Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("name: (nil)\n");
		}
		else
		{
			printf("name: %s\n", d->name);
		}
		printf("%f\n", d->age);
		if (d->owner == NULL)
		{
			printf("name: (nil)\n");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}
	}
}
