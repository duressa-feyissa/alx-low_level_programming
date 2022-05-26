#include "main.h"

/**
 * flip_bits - A function count number of bits you would need to flip.
 * @n: number
 * @m: number
 * Return: the number of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a, sum;

	a = (n ^ m);
	sum = 0;
	while (a > 0)
	{
		if (a != ((a >> 1) * 2))
		{
			sum += 1;
		}
		a = a >> 1;
	}
	return (sum);
}
