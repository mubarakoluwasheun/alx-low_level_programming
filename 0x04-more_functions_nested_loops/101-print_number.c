#include <stdio.h>
#include "main.h"

/**
 * print_number - A function that prints integer
 *
 * @n: the input variable
 * @temp: a variable
 * @magnitude: the variavke size
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	 int magnitude = 1;
	 int temp = n;

	while (temp > 0)
	{
		magnitude *= 10;
		temp /= 10;
	}

	magnitude /= 10;

	while (magnitude > 0)
	{
		int digit = n / magnitude;
		_putchar('0' + digit);
		n -= digit * magnitude;
		magnitude /= 10;
	}
}
