#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 * @s:  String to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	while (i != 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
