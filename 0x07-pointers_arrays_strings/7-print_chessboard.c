#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: The array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j, k;

	k = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*a + k));
			if (j == 7)
			{
				_putchar('\n');
			}
			k++;
		}
	}
}
