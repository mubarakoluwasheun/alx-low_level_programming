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
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
