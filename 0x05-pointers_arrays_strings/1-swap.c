#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: The integer parameter.
 * @b: The integer parameter.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
