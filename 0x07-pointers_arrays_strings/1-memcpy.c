#include "main.h"

/**
 * _memcpy - a function that fills memory with a constant byte
 * @dest: The destination array
 * @src: The source of data to be copied
 * @n: The number of bytes to be copied.
 * Return: The pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
