#include "main.h"
#include <stdio.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: Value
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	int a = 1, b = *n;

	for (i = 0; i < 64; i++)
	{
		if (i == index)
		{
			*n = (*n - (a & b));
			return (1);
		}
		a = a * 2;
	}
	return (-1);
}
