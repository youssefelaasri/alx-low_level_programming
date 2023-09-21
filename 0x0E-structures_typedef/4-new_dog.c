#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
  *new_dog - fun
  *@name: names
  *@age: ages
  *@owner: owners
  *Return: ret
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog = malloc(sizeof(dog_t));

	if (new_Dog == NULL)
	{
		return (NULL);
	}
	new_Dog->name = strdup(name);
	new_Dog->age = age;
	new_Dog->owner = strdup(owner);
	if (name == NULL || owner == NULL)
	{
		free(new_Dog->name);
		free(new_Dog->owner);
		free(new_Dog);
	}
	return (new_Dog);
}
