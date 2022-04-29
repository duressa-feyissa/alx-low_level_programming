#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @src: The pointer to the destination.
 * @dest: The string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}

	j = 0;
	while (*(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
