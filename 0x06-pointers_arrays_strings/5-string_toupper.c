#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Entry point of the program
 * Desription - The program changes all lowercase
 *              letters of a string to uppercase
 *
 * @str: the first parameter of the function
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
}
