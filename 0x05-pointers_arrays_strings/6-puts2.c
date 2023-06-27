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
	int i = 0;

	while (str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');

}
