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
	for (i = 0; i <= 9; i++)
	{
		if (c[i] >= '0' && c[i] <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	_putchar('\n');
}
