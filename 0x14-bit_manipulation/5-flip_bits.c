#include "main.h"

/**
 * check - find number of bits flipped
 * @a: Number
 *
 * Return: the number of bits flipped.
 */

unsigned int check(unsigned int a)
{
	unsigned int sum;

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

/**
 * flip_bits - A function count number of bits you would need to flip.
 * @n: number
 * @m: number
 * Return: the number of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (check(n ^ m));
}
