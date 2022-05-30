#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: is the name of the file to create.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, t;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < -1)
	{
		return (-1);
	}

	if (text_content)
	{
		i = 0;
		while (*(text_content + i))
			i++;
		t = write(fd, text_content, i);
		if (t != i)
			return (-1);
	}
	close(fd);
	return (1);
}
