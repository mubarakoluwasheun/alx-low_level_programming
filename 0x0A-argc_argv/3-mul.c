#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that multiplies
 *        two numbers
 *
 * @argc: Argument count of the function
 * @argv: Argument vector of the function
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mul);
	return 0;
}
