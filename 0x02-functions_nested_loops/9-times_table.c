#include "main.h"
#include <stdio.h>

/**
 * times_table - A function that print
 *		       the 9 times table
 *
 * @n: the parameter of the times table function
 *
 * Return: no return value
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
			{
				printf("%d", product);
			}
			else if (j == n)
			{
				printf(", %3d\n", product);
			}
			else
			{
				printf(", %3d", product);
			}
			if (n == 0)
			{
				printf("\n");
			}
		}
	}
}
