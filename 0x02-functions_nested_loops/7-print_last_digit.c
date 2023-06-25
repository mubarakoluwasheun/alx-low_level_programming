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

	if (num < 0)
	{
		num = -num;
	}

	lastDigit = num % 10;

	_putchar('0' + lastDigit);

}
