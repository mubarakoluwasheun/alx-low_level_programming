#include "main.h"

/**
 * is_palindrome - A function that returns 1 if
 *		   a string is a palindrome of
 *		   0 otherwise
 *
 * @s: first (string) parameter of the palindrome
 * Return: Always 0(success)
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

int is_palindrome(char *s)
{
	int length;
	int result;

	length = _strlen_recursion(s);

	if (length <= 1)
	{
		return 1;
	}
	if (*s != *(s + length - 1))
	{
		return 0;
	}

	*(s + length - 1) = '\0';

	result = is_palindrome(s + 1);

	*(s + length - 1) = *(s);

	return result;
}
