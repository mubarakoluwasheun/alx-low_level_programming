#include "main.h"

/**
 * rot13 - Entry point of the program
 * Desription - The program encodes a
 *              string using rot13
 *
 * @str: the first parameter of the function
 * Return: Always 0 (Success)
 */

char *rot13(char *str)
{
	int i = 0;
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		int j = 0;

		while (alphabet[j] != '\0')
		{
			if (str[i] == rot13[j])
			{
				str[i] = alphabet[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
