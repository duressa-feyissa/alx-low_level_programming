#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
