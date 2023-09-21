#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	nd->name = malloc((strlen(name) + 1));
	nd->owner = malloc((strlen(owner) + 1));
	if (nd->name == NULL || nd->owner == NULL)
	{
		free(nd->name);
		free(nd->owner);
		free(nd);
		return (NULL);
	}
	strcpy(nd->name, name);
	nd->age = age;
	strcpy(nd->owner, owner);
	return (nd);
}