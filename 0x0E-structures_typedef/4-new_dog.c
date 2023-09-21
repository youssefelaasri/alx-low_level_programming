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
	strcpy(new_Dog->name, name);
	new_Dog->age = age;
	strcpy(new_Dog->owner, owner);
	return(new_Dog);
}
