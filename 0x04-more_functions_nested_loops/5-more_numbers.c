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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
