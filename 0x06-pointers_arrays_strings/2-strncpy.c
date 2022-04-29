#include "main.h"

/**
 * _strncpy - A function that prints half of a string.
 * @src: The pointer to the destination.
 * @dest: The string to be copied.
 * @n: number of string to be copied
 * Return: The pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}


	return (dest);
}
