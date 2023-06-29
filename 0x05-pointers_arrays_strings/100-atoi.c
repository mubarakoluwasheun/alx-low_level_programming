#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Entry point of the program
 * Desription - The program comverts a
 *              string to an integer
 *
 * @s: the parameter of the function
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
        	i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}
	while (s[i] != '0' && s[i] <= '9')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
			{
				if (sign == -1)
				{
					return (INT_MIN);
				}
				else
				{
					return (INT_MAX);
				}
			}
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
