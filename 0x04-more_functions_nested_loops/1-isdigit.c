#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if input is a digit
 *
 * Description - print digit 0 -9
 *
 * @c: the input digit
 *
 * Return: returns 1 for Success or 0 for failure
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
