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
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
