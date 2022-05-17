#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: Pointer to name member
 * @age: float data type member of struct dog
 * @owner: Pointer to onwer member
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	(*d).owner = owner;
}
