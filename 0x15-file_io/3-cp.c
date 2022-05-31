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
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	s = read(fd1, ptr, 1024);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	t = write(fd2, ptr, s);
	if (t != s)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	a = close(fd1);
	b = close(fd2);
	if (a !=  0 || a != 0)
	{
		if (a != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		if (b != 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
