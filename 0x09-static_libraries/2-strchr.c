#include "main.h"

/**
 * *_strchr - returns pointer to the first occurence ofcharacter c
 * @c: the character
 * @s: the string
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
