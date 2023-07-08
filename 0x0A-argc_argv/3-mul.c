#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints all
 *        arguments it receives
 *
 * @argc: Argument count of the function
 * @argv: Argument vector of the function
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[]) {
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
