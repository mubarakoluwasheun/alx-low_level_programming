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
	int i = 0;
	int capFirstWord = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == ',' || str[i] == '.' || str[i] == '\n')
		{
			if (str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"')
			{
				else if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
				{
					capFirstWord = 1;
				}
			}
		}
		else if (capFirstWord)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
			capFirstWord = 0;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] - 'A' + 'a';
			}
		}
		i++;
	}
	return (str);
}
