#include "main.h"

/**
 * _memset - A function that copies memory area
 * @s: The pointer to the array.
 * @b:  The value to be set.
 * @n:  The number of bytes to be set to the value.
 * Return: The pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
