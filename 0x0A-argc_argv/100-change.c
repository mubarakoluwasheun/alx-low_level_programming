#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * centsChange - A function that prints the minimum
 *		 number of coins to make change for
 *		 an amount of money
 *
 * @argc: first (count) parameter of the function
 * @argv: second (vector) parameter of the function
 *
 * Return: Always 0(success)
 */

int centsChange(int argc, char *argv[])
{
	int i;
	int n;
	int count;
	int cents[]

	*cents [5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	count = 0;

	for (i = 0; i < 5; i++)
	{
		count += n / cents[i];
		n %= cents[i];
	}
	printf("%d\n", count);
	return (0);
}

int main(int argc, char *argv[])
{
	return (centsChange(argc, argv));
}
