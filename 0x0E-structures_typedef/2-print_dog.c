#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("name: ", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
