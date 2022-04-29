#include "main.h"
#include <stdio.h>

/**
 * puts_half - A function that prints half of a string
 * @str:  String to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
		n = i - ((i - 1) / 2);
	else
		n = i / 2;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
