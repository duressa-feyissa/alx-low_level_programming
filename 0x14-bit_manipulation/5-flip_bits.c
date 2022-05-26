#include "main.h"

/**
 * flip_bits - A function count number of bits you would need to flip.
 * @n: number
 * @m: number
 * Return: the number of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, i, sum;

	if (n == 0 || m == 0)
		return (0);

	a = (n ^ m);
	sum = 0;
	for (i = a; a != 0; i++)
	{
		if (a != ((a >> 1) * 2))
		{
			sum += 1;
		}
		a = a >> 1;
	}
	return (sum);
}
