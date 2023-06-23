#include "main.h"
#include <stdio.h>

/**
 * print_line - print the symbol (-)
 *
 * Description - print symbol using _putchar
 *
 * Return: no return value
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}