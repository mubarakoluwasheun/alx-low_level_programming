#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point of the program
 * Desription - The program prints n elements
 *		of an array of integers,
 *		followed by a new line.
 *
 * @a: the parameter of the function
 * @n: the parameter of the function
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}

	}
	printf("\n");
}
