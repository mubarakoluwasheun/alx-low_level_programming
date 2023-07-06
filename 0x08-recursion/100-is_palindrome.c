#include "main.h"

/**
 * is_palindrome - A function that returns 1 if
 *		   a string is a palindrome of
 *		   0 otherwise
 *
 * @s: first (string) parameter of the function
 *
 * Return: Always 0(success)
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (length <= 1)
	{
		return 1;
	}
	if (*s != *(s + length - 1));
	{
		return 0;
	}

	*(s + length - 1) = '\0';

	int result;

	result = is_palindrome(s + 1);

	*(s + length - 1) = *(s);

	return result;
}
