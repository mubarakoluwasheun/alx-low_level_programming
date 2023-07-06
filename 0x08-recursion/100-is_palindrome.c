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
	int start;
	int end;

	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return is_palindrome(s, start + 1, end - 1);
}
