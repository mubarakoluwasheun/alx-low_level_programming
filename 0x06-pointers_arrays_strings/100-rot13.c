#include "main.h"
#include <stdio.h>

/**
 * rot13 - Entry point of the program
 * Desription - The program encodes a
 *              string using rot13
 *
 * @str: the first parameter of the function
 * Return: Always 0 (Success)
 */

#include <stdio.h>

char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int isletter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
				isLetter = 1;
				break;
			}
		}
		if (!isLetter)
		{
			continue;
		}
	}
	return (str);
}
