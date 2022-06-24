#include <stdio.h>

void before_main(void) __attribute__ ((constructor));
/**
 * before_main  - prints before the main function is executed.
 *
 * Return: Void.
 */
void before_main(void)
{
	char *st;

	st = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", st);
}
