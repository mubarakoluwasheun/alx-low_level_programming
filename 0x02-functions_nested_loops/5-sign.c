#include "main.h"

/**
 * print_sign - A function that print signs + if n > 1
 *		or - if n < 1 and 0 if n = 1
 *
 * @n: the parameter of the print-sign function
 *
 * Return:  returns the int n value
 */

int print_sign(int n)
{
	if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
