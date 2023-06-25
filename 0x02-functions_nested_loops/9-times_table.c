#include "main.h"

/**
 * times_table - A function that prints the
 *	         9 times table
 *
 * Return: no return value
 */

void times_table(void)
{
	int i;
	int result;

	for (i = 0; i <= 10; i++)
	{
		result = (9 * i);

		if (result < 10)
		{
			_putchar(result + '0');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar(' ');
	}
	_putchar('\n');
}
