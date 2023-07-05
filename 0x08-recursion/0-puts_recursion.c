#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 *           follow by a new line
 *
 * @s: first (string) parameter of the function
 *
 * Return: returns 1 which means not executed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (1);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
