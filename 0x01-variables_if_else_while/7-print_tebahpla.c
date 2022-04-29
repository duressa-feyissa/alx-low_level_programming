#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the lowercase alphabet in reverse.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
