#include "main.h"
#include <stdio.h>

/**
 * print_number - A function that prints integer
 *
 * @n: the input variable
 *
 * Return: Always 0(success)
 */
void print_number(int n)
{
	int i, j, div;
	char c;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	div = 1;
	i = n;
	while (i > 9)
	{
		i /= 10;
		div *= 10;
	}

	while (div >= 1)
	{
		j = n / div;
		c = j + '0';
		_putchar(c);
		n -= j * div;
		div /= 10;
	}
}
