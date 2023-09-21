#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog = malloc(sizeof(dog_t));
	if (new_Dog == NULL)
	{
		return (NULL);
	}
	new_Dog->name = strdup(name);
	new_Dog->age = age;
	new_Dog->owner = strdup(owner);;
	return(new_Dog);
}
