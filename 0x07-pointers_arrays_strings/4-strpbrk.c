#include "main.h"

/**
 * _strpbrk - a function that fills memory with a constant byte
 * @s: The C string to be scanned.
 * @accept: The C string containing the characters to match.
 *
 * Return: The pointer to dest.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
