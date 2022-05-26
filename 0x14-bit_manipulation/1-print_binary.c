#include "main.h"

/**
 * _binary - Convert decimal to binary representation number except 0.
 * @n: Decimal number
 * Return: Void.
 */

void _binary(unsigned long int n)
{
	if (n == 0)
		return;
	_binary(n >> 1);
	if (n == (n >> 1) * 2)
		_putchar('0');
	else
		_putchar('1');
}

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: Decimal number
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
		_binary(n);
}
