#include "main.h"

/**
 * _memset - A function that prints a string
 *           follow by a new line
 *
 * @s: first (string) parameter of the function
 *
 * Return: Always 0(success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
