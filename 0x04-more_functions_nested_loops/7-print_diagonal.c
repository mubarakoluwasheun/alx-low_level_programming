#include "main.h"
#include <stdio.h>

/**
 * print_line - print the symbol \
 *
 * Description - print integers using _putchar
 *
 * Return: no return value
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

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
}
