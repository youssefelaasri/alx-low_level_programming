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
			printf("nil\n");
		}
		else
		{
			printf("%s\n", d->name);
		}
		if (d->age == 0)
		{
			printf("nil\n");
		}
		else
		{
			printf("%f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("%s\n", d->owner);
		}
	}
}
