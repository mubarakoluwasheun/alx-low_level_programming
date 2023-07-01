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
	int wordCount = 0;

	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		int isSeparator = 0;
		int j = 0;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				isSeparator = 1;
				break;
			}
		}
		if (isSeparator)
		{
			capFirstWord = 1;
			wordCount++;
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
				str[i] = str[i] + ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}
