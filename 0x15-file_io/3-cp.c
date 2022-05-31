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
	int fd, t;
	char *ptr;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
		return (0);
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
	exit(98);
	}
	read(fd, ptr, 1024);
	close(fd);
	fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
	exit(99);
	}
	t = write(fd, ptr, 1024);
	if (t < 0)
	{
	free(ptr);
	dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
	exit(99);
	}
	close(fd);
	free(ptr);
	if (!fd)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
