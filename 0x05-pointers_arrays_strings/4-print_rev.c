#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point of the program
 * Desription - The program prints a string
 *              in reverse, followed by a new line
 *
 * @s: the parameter of the function
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
