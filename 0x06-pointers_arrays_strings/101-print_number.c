#include "main.h"

/**
 * print_number - Entry point of the program
 * Desription - The program changes all lowercase
 *              letters of a string to uppercase
 *
 * @n: the first parameter of the function
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	if (n == 0)
	{
	       	_putchar('0');
        	return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
