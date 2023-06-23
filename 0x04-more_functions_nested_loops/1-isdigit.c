#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if input is a digit
 *
 * @c: The input digit
 *
 * Return: returns 1 for Success or 0 for failure
 */
int _isdigit(int c)
{
	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}

	}
	_putchar('\n');
	return (0);
}
