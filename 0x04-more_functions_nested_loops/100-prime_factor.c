#include "main.h"
#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i, n, p;

	i = 2;
	n = 612852475143;
	p = 0;

	while (i <= n && n > 0)
	{
		if (n % i == 0)
		{
			p = i;
			n = n / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", p);

	return (0);
}
