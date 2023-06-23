#include "main.h"
#include <stdio.h>

/**
 * mul:  multiply two integers
 *
 * Description - print the multiples of integers
 *
 * _putchar: display the output
 * @a: first input digit
 * @b: second input digit
 * multiple: a constant variable
 * digits: array to store individual digits
 * numDigit: number of digits in product
 *
 * Return: returns 0 (Success)
 */
int mul(int a, int b)
{
	long long int multiple;
	multiple = (a * b);

	if (multiple == 0)
	{
		_putchar('0');
		return (0);
	}
	if (multiple < 0)
	{
		_putchar('-');
		multiple = -multiple;
	}
	int digits[20];
	int numDigits = 0;

	while (multiple > 0)
	{
		digits[numDigits] = (multiple % 10);
		multiple = (multiple / 10);
		numDigits++;
	}

	for (int i = numDigits - 1; i >= 0; i--)
	{
		_putchar('0' + digits[i]);
	}
	_putchar('\n');
}
