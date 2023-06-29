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
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
        	i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0'));
		i++;
	}

	return (result * sign);
}
