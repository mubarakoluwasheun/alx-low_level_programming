#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * print_number - A function that prints integer
 *
 * @n: the input variable
 *
 * Return: Always 0(success)
 */
void print_number(int n)
{
	unsigned int m;
	unsigned int i, j, div;
	char c;

	if (n == INT_MIN)
	{
		_putchar('-');
		m = (unsigned int)(-(n + 1)) + 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		m = (unsigned int)(-n);
	}
	else
	{
		m = (unsigned int)n;
	}

	div = 1;
	i = m;
	while (i > 9)
	{
		i /= 10;
		div *= 10;
	}
	while (div >= 1)
	{
		j = m / div;
		c = j + '0';
		_putchar(c);
		m -= j * div;
		div /= 10;
	}
}
