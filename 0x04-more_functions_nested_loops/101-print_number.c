#include <stdio.h>
#include "main.h"

/**
 * print_number - A function that prints integer
 *
 * @n: the input variable
 * @temp: a variable
 * @magnitude: the variable size
 *
 */

void print_number(int n)
{
	int magnitude = 1;
	int temp = n;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	while (temp > 0)
	{
		magnitude *= 10;
		temp /= 10;
	}

	while (magnitude > 0)
	{
		digit = n / magnitude;
		_putchar('0' + digit);
		n -= digit * magnitude;
		magnitude /= 10;
	}
}
