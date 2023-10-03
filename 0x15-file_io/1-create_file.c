#include "main.h"

/**
 * create_file - A function that creates a file with the
 * specified name and writes the given text content to it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: Returns 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
