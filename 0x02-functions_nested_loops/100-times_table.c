#include "main.h"
#include <stdio.h>

/**
 * print_times_table - A function that print
 *		       the times table
 *
 * @n: the parameter of the times table function
 *
 * Return: no return value
 */

void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n > 15 || n < 0)
	{
		break
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			printf("%d\t", result);
		}
		printf("\n");
	}
}
