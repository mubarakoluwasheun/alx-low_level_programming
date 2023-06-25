#include "main.h"

/**
 * print_last_digit - A function that prints
 *		      last digit
 *
 * @num: the parameter of the print_last_digit
 *       function
 *
 * @absoluteNum: the absolute number variable
 * @lastDigit: the last digit return variable
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
	_putchar('\n');

	return (lastDigit);
}
