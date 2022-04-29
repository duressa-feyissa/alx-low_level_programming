#include "main.h"
/**
 * _islower - Check for lower case
 * @c : character to check the case
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
