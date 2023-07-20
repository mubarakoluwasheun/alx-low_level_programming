#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, numBytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < numBytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
