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

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
