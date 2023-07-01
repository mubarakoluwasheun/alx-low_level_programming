#include "main.h"
#include <stdio.h>

/**
 * cap_string - Entry point of the program
 * Desription - The program capitalizes all
 *              words of a string
 *
 * @str: the first parameter of the function
 * Return: returns the str value
 */

char *cap_string(char *str)
{
	int i;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}

		j = 0;

		while (sep[j] != '\0')
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= ('a' - 'A');
			}
			j++;
		}
		i++;
	}
	return (str);
}
