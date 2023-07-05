#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string
 *			  in reverse
 *
 * @s: first (string) parameter of the function
 *
 * Return: returns void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_print_rev_recursion(s[i] + 1);
}
