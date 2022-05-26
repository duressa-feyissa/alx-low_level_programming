#include "main.h"
#include <stdlib.h>

/**
 * check - A function that check if the string contain binary number only.
 * @b: String passed as parameter
 *
 * Return: If the string is binary number 1 otherwise 0.
 */

unsigned int check(const char *b)
{
	unsigned int i, c;

	i = 0;
	c = 0;
	while (*(b + i))
	{
		if (b[i] == '0' || b[i] == '1')
			c++;
		i++;
	}
	if (c == i)
		return (1);
	return (0);
}

/**
 * binary_to_uint - A function that converts a binary no. to an unsigned int.
 * @b: String passed as parameter
 *
 * Return: The converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j, x, sum;
	int i;

	if (b == NULL)
		return (0);

	x = check(b);
	if (x == 0)
		return (0);

	i = 0;
	while (*(b + i))
	{
		i++;
	}

	i--;
	sum = 0;
	for (j = 1; i >= 0; j = j * 2)
	{
		if (b[i] == '1')
		{
			sum += j;
		}
		i--;
	}
	return (sum);
}
