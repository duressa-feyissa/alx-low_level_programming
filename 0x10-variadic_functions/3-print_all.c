#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_i - prints an int
 * @ap: the list of args
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_c - prints an char
 * @ap: the list of args
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_f - prints an float
 * @ap: the list of args
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - prints an string
 * @ap: the list of args
 */
void print_s(va_list ap)
{
	char *z = va_arg(ap, char *);

	if (!z)
	{
		printf("(nil)");
		return;
	}
	printf("%s", z);
}

/**
 * print_all - prints all
 * @format: formats of arg
 */
void print_all(const char * const format, ...)
{
	new_type types[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL},
	};

	va_list ap;
	char *s1 = "", *s2 = ", ";
	int i, j;

	i = 0;
	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].z != '\0')
		{
			if (format[i] == types[j].z)
			{
				printf("%s", s1);
				types[j].f(ap);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
