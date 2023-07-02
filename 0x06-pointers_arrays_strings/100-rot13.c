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
	int i;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		int j;

		while (alphabet[j] != '\0')
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
