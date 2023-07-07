#include "main.h"
#include <stdio.h>

/**
 * times_table - A function that print
 *		 the 9 times table
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
			else if (j == 9)
			{
				printf(", %2d\n", product);
			}
			else
			{
				printf(", %2d", product);
			}
		}
	}
}
