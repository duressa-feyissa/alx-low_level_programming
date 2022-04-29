#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array.
 * @a: The pointer to the array.
 * @n: The integer parameter
 *
 * Return: The pointer to dest.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
