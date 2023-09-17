#include "dog.h"
#include <stdlib.h>
/**
*free_dog - fun
*@d: para
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
