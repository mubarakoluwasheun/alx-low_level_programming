#include "main.h"

/**
 * leet - Entry point of the program
 * Desription - The program encodes a
 *              string into 1337
 *
 * @str: the first parameter of the function
 * Return: Always 0 (Success)
 */

char *leet(char *str)
{
	int i = 0;
	int found = 0;
	char *p = str;
	char *leetChars = "aAeEoOtTlL";
	char *leetReplacements = "4433007711";

	while (*p != '\0')
	{
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
