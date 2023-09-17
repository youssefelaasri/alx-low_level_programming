#include <stdio.h>
#include "dog.h"
/**
  *print_dog - fun
  *@d: our str
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
		if (d->age == 0)
		{
			printf("age: 0.000000\n");
		}
		else
		{
			printf("age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("owner: (nil)\n");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}
	}
}
