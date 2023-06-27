#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry point of the program
 * Desription - The program prints half
 *		of a string follow by
 *		new line
 *
 * @str: the parameter of the function
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}
	start = (len + 1) / 2;

	for (; str[start] != '\0'; start++)
	{
		_putchar(str[start]);
	}
	_putchar('\n');
}
