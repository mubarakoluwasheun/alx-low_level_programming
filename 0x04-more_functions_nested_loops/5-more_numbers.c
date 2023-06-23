#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print integers 0 to 14 10 times
 *
 * Description - print integers using _putchar
 *
 *
 * Return: return 0 (Success)
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
	}
	_putchar('\n');
}
