#include "main.h"

/**
 * print_number - Entry point of the program
 * Desription - The program prints an integer
 *
 * @n: the first parameter of the function
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int a;

	if (n == 0)
	{
	       	_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	a = n;

	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar('0' + (a % 10));
}
