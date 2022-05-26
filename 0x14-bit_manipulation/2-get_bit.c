#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Value
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i < 64; i++)
	{
		if (i == index)
			return (n & 1);
		n = n >> 1;
	}
	return (-1);
}
