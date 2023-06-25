#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that print from
 *		 n integer to 98
 *
 * @n: the parameter of the function
 *
 * Return: no return value
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n)

		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", n),
}
