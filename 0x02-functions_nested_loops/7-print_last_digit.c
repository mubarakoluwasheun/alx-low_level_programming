#include "main.h"

/**
 * print_last_digit - A function that prints
 *		      last digit
 *
 * @num: the parameter of the print_last_digit
 *       function
 *
 * Return:  returns last digit
 */

int print_last_digit(int num)
{
	int lastDigit;
	lastDigit = num % 10;

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}

	_putchar('0' + lastDigit);
	return (lastDigit);
}
