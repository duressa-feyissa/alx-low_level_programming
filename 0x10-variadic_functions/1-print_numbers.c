#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @n: number of argument
 * @separator: Pointer to string
 * Return: Void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
		{
			printf("%c%c", *separator, *(separator + 1));
		}
	}
	printf("\n");
	va_end(ap);
}
