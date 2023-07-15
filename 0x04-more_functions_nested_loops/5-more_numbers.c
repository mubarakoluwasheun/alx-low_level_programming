#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print integers 0 to 14 10 times
 *
 * Description - print integers using _putchar
 *
 * Return: no return value
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
