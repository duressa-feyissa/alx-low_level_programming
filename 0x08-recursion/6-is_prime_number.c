#include "main.h"
/**
 * prime_found - found prime number
 * @i: dividend
 * @j: divider
 *
 * Return: return 1 if the input integer is prime number, otherwise 0
 */
int prime_found(int i, int j)
{
	if (j != 1)
	{
		if (i == j)
		{
			return (1);
		}
		else if (j % i == 0 || j <= 1)
		{
			return (0);
		}
		else
		{
			return (prime_found(i + 1, j));
		}
	}
	return (0);
}
/**
 * is_prime_number - shows if is a prime number
 * @n: number
 *
 * Return: the input integer if its a prime number
 */
int is_prime_number(int n)
{
	int a = 2;

	return (prime_found(a, n));
}
