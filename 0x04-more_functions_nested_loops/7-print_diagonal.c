#include "main.h"
#include <stdio.h>

/**
 * print_line - print integers 0 to 14 10 times
 *
 * Description - print integers using _putchar
 *
 * Return: no return value
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
