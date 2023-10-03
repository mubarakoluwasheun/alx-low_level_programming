#include "main.h"

/**
 * append_text_to_file - A function that appends text at
 * the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end
 * of the file
 *
 * Return: Returns 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		n_write = write(fd, text_content, len);
		if (n_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
