#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix.
 * @a: The array
 * @size: Thw size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	long i, j, sum1, sum2, c, d, e;

	sum1 = 0;
	sum2 = 0;
	c = 0;
	d = 0;
	e = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == e)
			{
				d = d + e;
				sum2 = sum2 + *(a + d);
			}

			if (i == j)
			{
				sum1 = sum1 + *(a + c);
				c = c + size + 1;
			}

		}
	}
	printf("%ld, %ld\n", sum1, sum2);
}
