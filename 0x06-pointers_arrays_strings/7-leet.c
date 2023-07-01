#include "main.h"
#include <stdio.h>

/**
 * leet - Entry point of the program
 * Desription - The program changes all lowercase
 *              letters of a string to uppercase
 *
 * @str: the first parameter of the function
 * Return: Always 0 (Success)
 */

char *leet(char *str);
{
	char *p = str;
	char *leetChars = "aAeEoOtTlL";
	char *leetReplacement = "4330711";

	while (*p != '\0')
	{
		int i = 0;
		int found = 0;

		while (leetChars[i] != '\0')
		{
			if (*p == leetChars[i])
			{
				*p = leetReplacements[i];
				found = 1;
			}
			i++;
		}
		if (!found)
		{
			p++;
		}
		else
		{
			p++;
		}
	}
	return (str);
}

