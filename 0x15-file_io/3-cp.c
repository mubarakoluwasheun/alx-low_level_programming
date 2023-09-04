#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * check_args - A function that checks the number of arguments
 * @argc: number of arguments
 *
 * Return: Returns 0 on success, exit with code on failure
 */
int check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}

/**
 * open_files - A function that opens the input and output files
 * @argv: array of arguments
 * @fd_from: pointer to input file descriptor
 * @fd_to: pointer to output file descriptor
 *
 * Return: Returns 0 on success, exit with code on failure
 */
int open_files(char *argv[], int *fd_from, int *fd_to)
{
	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*fd_from);
		exit(99);
	}
	return (0);
}

/**
 * copy_file - A function that copies the content
 * of one file to another file
 * @fd_from: input file descriptor
 * @fd_to: output file descriptor
 * @argv: array of arguments
 *
 * Return: 0 on success, exit with code on failure
 */
int copy_file(int fd_from, int fd_to, char **argv)
{
	ssize_t n_read, n_write;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write == -1 || n_write != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	return (0);
}

/**
 * close_files - closes the input and output files
 * @fd_from: input file descriptor
 * @fd_to: output file descriptor
 *
 * Return: 0 on success, exit with code on failure
 */
int close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

/**
 * main - main function that calls other functions
 * to perform the file copying operation
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_args(argc);

	open_files(argv, &fd_from, &fd_to);

	copy_file(fd_from, fd_to, argv);

	close_files(fd_from, fd_to);

	return (0);
}
