#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Entry point of the program
 * Desription - The program comverts a
 *              string to an integer
 *
 * @d: the parameter of the function
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
	{
        	s++;
	}
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = (result * 10 + (*s - '0'));
		s++;
	}

	return (result * sign);
}
