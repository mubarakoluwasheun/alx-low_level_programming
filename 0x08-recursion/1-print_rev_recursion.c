#include "main.h"

/**
 * _strlen_recursion - A function that prints a string
 *			in reverse
 *
 * @s: first (string) parameter of the function
 *
 * Return: returns void
 */

int _strlen_recursion(char *s);
{
	int length = 0;
	int result = length;

	if (*s == '\0')
	{
		length = 0;
		return (result);
	}
	length++;

	_print_rev_recursion(s + 1);
}
