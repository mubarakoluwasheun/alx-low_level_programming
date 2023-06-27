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
	if (len % 2 == 0)
	{

		start = (len + 1) / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
