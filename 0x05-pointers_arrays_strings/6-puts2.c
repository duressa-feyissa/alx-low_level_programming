#include "main.h"

/**
 * puts2 - Prints character of a string, starting with the first character
 * @str: A character to be printed
 *
 * Return: Void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
