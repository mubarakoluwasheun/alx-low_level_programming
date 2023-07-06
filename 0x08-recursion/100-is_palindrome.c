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
	if (*s == '\0' || *(s + 1) == '\0')
	{
		return (1);
	}
	if (*s != *(s + strlen(s) - 1))
	{
		return (0);
	}

	*(s + strlen(s) - 1) = ('\0');

	s = is_palindrome(s + 1);

	*(s + strlen(s) - 1) = *(s);

	return (s);
}
