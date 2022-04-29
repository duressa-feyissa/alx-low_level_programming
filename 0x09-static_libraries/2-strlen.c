#include "main.h"
/**
 * _strlen - function to return lenht of a string
 * @s: pointer that points address ofchar s
 * Return: len of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
