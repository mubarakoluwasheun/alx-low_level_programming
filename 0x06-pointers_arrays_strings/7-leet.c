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
	char *leetChars = "aAeEoOtTlL";
	char *leetReplacements = "4433007711";

	while (str[i] != '\0')
	{
		int j = 0;
		while (leetChars[j] != '\0')
		{
			if (str[i] == leetChars[j])
			{
				str[i] = leetReplacements[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
