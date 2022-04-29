#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0, k = 0; j < 15; j++, k++)
		{
			if (j == 10)
				k = 0;

			if (j > 9)
				_putchar('1');

			_putchar(k + 48);
		}
		_putchar('\n');
	}
}
