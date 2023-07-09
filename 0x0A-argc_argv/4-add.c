#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function that adds positive
 *        integers
 *
 * @argc: Argument count of the function
 * @argv: Argument vector of the function
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;
	int inputNumber;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		inputNumber = atoi(argv[i]);

		if (inputNumber <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += inputNumber;
	}

	printf("%d\n", sum);
	return (0);
}
