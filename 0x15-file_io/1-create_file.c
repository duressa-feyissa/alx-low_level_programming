#include "main.h"

/**
 * create_file - A  function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, t;
	char *s = "";

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = s;

	i = 0;
	while (*(text_content + i))
		i++;

	t = write(fd, text_content, i);
	if (t == -1)
		return (-1);
	return (1);
}
