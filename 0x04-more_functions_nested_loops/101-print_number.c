#include <stdio.h>
#include "main.h"

/**
 * print_number - A function that prints integer
 *
 * @n: the input variable
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;
	int temp = n;

	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor != 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}
