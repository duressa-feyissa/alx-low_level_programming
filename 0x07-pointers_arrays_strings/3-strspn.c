#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The C string to be scanned.
 * @accept: This is the character to be searched in str.
 *
 * Return: The pointer to dest.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;
	unsigned int x;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				c++;
		}
		if (c == 0)
		{
			x = i;
			break;
		}
	}
	return (x);
}
