#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it.
 * @filename: The file that opened or read.
 * @letters:  letters is the number of letters it should read and print.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, s, t;
	char *ptr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	ptr = malloc((sizeof(char)) * letters);
	if (!ptr)
	{
		free(ptr);
		return (0);
	}

	s = read(fd, ptr, letters);
	if (s < 0)
	{
		free(ptr);
		return (0);
	}

	t = write(STDOUT_FILENO, ptr, letters);
	if (t < 0)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	return (t);
}
