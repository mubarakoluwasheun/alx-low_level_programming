#include "main.h"

/**
 * _strlen_recursion - A function that prints the length
 *			of a string
 *
 * @s: first (string) parameter of the function
 *
 * Return: returns 0(Success)
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		int result = length;
		length = 0;
		return (result);
	}
	length++;
	return (1 + _strlen_recursion(s + 1));
}
