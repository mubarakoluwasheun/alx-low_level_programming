#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point of the program
 * Desription - The program prints a string
 *              followed by a new line to stdout
 *
 * @str: the parameter of the function
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
