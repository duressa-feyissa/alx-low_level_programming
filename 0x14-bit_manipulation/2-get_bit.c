#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Value
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int j, *A, i;
	unsigned int k, m;
	unsigned long int num;

	if (n == 0)
		return (0);

	num = n;
	for (j = 0; n != 0; n = n / 2)
		j++;

	A = malloc(sizeof(int) * j);
	if (A == NULL)
		return (-1);

	for (i = 0; num != 0; num = num / 2)
	{
		A[i] = num % 2;
		i++;
	}

	m = (unsigned int)j;
	for (k = 0; k < m; k++)
	{
		if (index == k)
		{
			return (A[k]);
		}
	}
	return (-1);
}
