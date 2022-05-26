#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Value
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j, A[100];
	unsigned int k, m;

	if (n == 0)
		return (0);

	for (j = 0; n != 0; n = n / 2)
	{
		A[j] = n % 2;
		j++;
	}
	m = (unsigned int)j;

	for (k = 0; k < m; k++)
	{
		if (index == k)
			return (A[k]);
	}

	return (-1);
}
