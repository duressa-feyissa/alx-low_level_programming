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
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
