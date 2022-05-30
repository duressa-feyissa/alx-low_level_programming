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
	char *filler1, *filler2;
	unsigned int i = 0, j = 0;

	if (new_size == old_size)
		return (ptr);

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	filler2 = malloc(new_size);
	if (filler2 == NULL)
	{
		return (NULL);
	}

	filler1 = ptr;
	if (new_size < old_size)
	{
		while (i < (new_size))
		{
			filler2[i] = filler1[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		while (j < (old_size))
		{
			filler2[j] = 0;
			j++;
		}
	}
	free(ptr);
	return (filler2);
}
