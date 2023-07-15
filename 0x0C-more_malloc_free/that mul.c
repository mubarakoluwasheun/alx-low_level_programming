#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiplyNumbers - A function that multiplies two
 *			 positive integers
 *
 * @num1: first input integer
 * @num2: second input integer
 *
 * Return: Always 0(success)
 */
int multiplyNumbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isPositiveInteger - A function that checks if input
 *           integer is positive
 *
 * @str: string parameter of the function
 *
 * Return: Always 0(success)
 */
int isPositiveInteger(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiple - Execution of the code starts here
 *
 * @argc: count parameter of the function
 * @argv: vector parameter of the function
 *
 * Return: Always 0(success)
 */

int multiple(int argc, char *argv[])
{
	int *num1, *num2;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!isPosistiveInteger(argv[1]) || !isPositiveInteger(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = malloc((strlen(argv[1]) + 1 ) * sizeof(char));
	num2 = malloc((strlen(argv[2]) + 1 ) * sizeof(char));
	result = malloc((strlen(argv[2]) + 1) * sizeof(char));
	if (num1 == NULL || num2 == NULL || result == NULL)
	{
		printf("Error: memory allocation failed\n");
		free(num1);
		free(num2);
		free(result);
		return (98);
	}
	strcpy(num1, argv[1]);
	strcpy(num2, argv[2]);
	multiplyStrings(num1, num2, result);
	printf("%s\n", result);
	free(num1);
	free(num2);
	free(result);
	return (0);
}
