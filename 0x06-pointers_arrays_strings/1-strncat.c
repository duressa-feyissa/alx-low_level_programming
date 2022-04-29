#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @src: The pointer to the destination.
 * @dest: The string to be copied.
 * @n: Number of string to be copied
 * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}

	j = 0;
	while ((j < n) && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
