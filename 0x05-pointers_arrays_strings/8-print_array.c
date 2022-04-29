#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Integer array to be printed
 * @n: Integer parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
