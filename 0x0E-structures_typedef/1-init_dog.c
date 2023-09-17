#include <string.h>
/**
  *init_dog - our fun
  *@d: strc
  *@name: name
  *@age: age
  *@owner: owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
