#include "main.h"

/**
 * _strchr - a function that fills memory with a constant byte
 * @s: the main C string to be scanned.
 * @c: This is the character to be searched in str.
 *
 * Return: The pointer to dest.
 */


char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		i++;
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
