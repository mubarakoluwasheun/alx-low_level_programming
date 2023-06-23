#include "main.h"
#include <stdio.h>

/**
 * print_line - print the symbol \
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
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
