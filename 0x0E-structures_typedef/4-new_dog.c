#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - a function that creates a new dog.
 * @name: Pointer to name member
 * @age: float data type member of struct dog
 * @owner: Pointer to onwer member
 *
 * Return: Point to user.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	user = malloc(sizeof(dog_t));
	if (user == NULL)
		return (NULL);

	user->name = name;
	user->age = age;
	user->owner = owner;

	return (user);
}
