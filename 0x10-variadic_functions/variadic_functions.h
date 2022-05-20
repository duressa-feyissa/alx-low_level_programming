#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct types - Define a new type struct types
 * @z: char
 * @f: function
 * Description: Longer description
 */
typedef struct types
{
	char z;
	void (*f)(va_list);
} new_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
