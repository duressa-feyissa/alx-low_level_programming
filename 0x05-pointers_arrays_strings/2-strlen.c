#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: The integer parameter.
 *
 * Return: The length of string passed
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
