#include "main.h"
#include <string.h>

/**
 * is_palindrome - A function that returns 1 if
 *		   a string is a palindrome of
 *		   0 otherwise
 *
 * @s: first (string) parameter of the palindrome
 * Return: Always 0(success)
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	if (*s != *(s + length - 1))
	{
		return (0);
	}

	*(s + length - 1) = ('\0');

	int result = is_palindrome(s + 1);

	*(s + length - 1) = *(s);

	return (result);
}
