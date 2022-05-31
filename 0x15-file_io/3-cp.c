#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @ac: Number of argument.
 * @av: String of charcters
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, t, s, a, b;
	char ptr[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	s = read(fd1, ptr, BUFSIZ);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	t = write(fd2, ptr, s);
	if ((fd2 < 0) || (t != s))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (s < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	a = close(fd1),	b = close(fd2);
	if (a < 0 || a < 0)
	{
		if (a < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		if (b < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
