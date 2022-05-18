#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Finds the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		i++;
	}

	return (i);
}

/**
 * _strcopy - Copies a string pointed to str1 to str2
 * @str1: The buffer storing the string copy.
 * @str2: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *str1, char *str2)
{
	int i;

	i = 0;
	while (*(str2 + i))
	{
		*(str1 + i) = *(str2 + i);
		i++;
	}
	*(str1 + i) = '\0';

	return (str1);
}

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

	user->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (user->name == NULL)
	{
		free(user);
		return (NULL);
	}

	user->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (user->owner == NULL)
	{
		free(user);
		return (NULL);
	}

	user->name = _strcopy(user->name, name);
	user->age = age;
	user->owner = _strcopy(user->owner, owner);

	return (user);
}
