#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: Pointer to dog struct
 *
 * Description: Longer description
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
