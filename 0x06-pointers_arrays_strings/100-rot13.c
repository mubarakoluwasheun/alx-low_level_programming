#include "main.h"

/**
 * rot13 - Entry point of the program
 * Desription - The program encodes a
 *              string using rot13
 *
 * @s: the first parameter of the function
 * Return: Always 0 (Success)
 */

char *rot13(char *s)
{
	int i = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		int j = 0;

		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
