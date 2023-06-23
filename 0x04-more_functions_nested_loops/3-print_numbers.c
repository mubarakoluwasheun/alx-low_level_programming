#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print integers 0 to 9
 *
 * Description - print integers using _putchar
 *
 *
 * Return: return 0 (Success)
 */

void print_numbers(void);
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue
		}
		_putchar('0' + i);
	}
	_putchar('\n');
	return (0);
}
