#include "main.h"

/**
 * _strlen_recursion - A function that prints the length
 *			of a string
 *
 * @s: first (string) parameter of the function
 *
 * Return: returns void
 */

int _strlen_recursion(char *s)
{
	int length = 0;
	int result = length;

	if (*s == '\0')
	{
		length = 0;
		_putchar ('0' + result);
	}
	length++;

	_strlen_recursion(s + 1);
}
