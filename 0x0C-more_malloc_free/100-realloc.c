#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - A function that reallocates a memory block
 * @ptr: is a pointer to the memory previously allocated
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size:  is the new size, in bytes of the new memory block
 * Return: New allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;
	char *filler1, *filler2;
	unsigned int i = 0, j = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		str = malloc(old_size * new_size);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
	}
	else
	{
		str = malloc(new_size);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
	}
	filler1 = ptr, filler2 = str;
	while (i++ < (sizeof(ptr) / old_size))
		filler2[i] = filler1[i];
	if (new_size < old_size)
	{
		while (j++ < (sizeof(ptr) / new_size))
			filler2[j + i] = 0;
	}
	free(ptr);
	return (str);
}
