#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @d: Pointer to struct
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
