#include "main.h"
#include <stdio.h>

/**
 * puts2 - Entry point of the program
 * Desription - The program prints every other
 *		character of a atring starting
 *		with the first character
 *
 * @str: the parameter of the function
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
		{
			break;
		}
		i++;
	}
	_putchar('\n');

}
