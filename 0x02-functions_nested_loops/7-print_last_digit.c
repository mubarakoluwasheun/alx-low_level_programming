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
	int absoluteNum;
	int lastDigit;

	absoluteNum = (num < 0) ? -num : num;

	lastDigit = absoluteNum % 10;

	_putchar('0' + lastDigit);

	return (lastDigit);
}
