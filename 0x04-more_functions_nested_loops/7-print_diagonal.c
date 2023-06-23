#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print the symbol \
 *
 * Description - print symbol using _putchar
 *
 * @n: the if condition variable
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
