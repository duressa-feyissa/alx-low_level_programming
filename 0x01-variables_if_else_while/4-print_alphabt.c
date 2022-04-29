#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i != 'q') && (i != 'e'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
