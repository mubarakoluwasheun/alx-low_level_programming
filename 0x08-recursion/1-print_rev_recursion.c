#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string
 *			 in reverse
 *
 * @s: first (string) parameter of the function
 *
 * Return: returns void
 */

void _print_rev_recursion(char *s)
{
	int length = 0;
	int result = length;

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s)
}
