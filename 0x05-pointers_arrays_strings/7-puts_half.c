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
	int i;
	int len = 0;
	int start = (len / 2);

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
