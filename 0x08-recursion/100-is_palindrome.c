#include "main.h"

/**
 * _strlen_recursion - A function that prints a string
 *		       length
 *
 * @s: first (string) parameter of the function
 *
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

/**
 * is_palindrome_checker - A function that returns 1 if
 *			   string is a palindrome or 0
 *			   if otherwise
 *
 * @start: start of string parameter of the palindrome
 * @end: end of string parameter of the palindrome
 * Return: Always 0(success)
 */

int is_palindrome_checker(char *start, char *end)
{
	if (start >= end)
	{
	return 1;
	}

	if (*start != *end)
	{
	return 0;
	}

	return is_palindrome_checker(start + 1, end - 1);
}

/**
 * is_palindrome - A function that prints a palindrome
 *
 * @s: first (string) parameter of the function
 *
 * Return: Always 0(success)
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (is_palindrome_checker(s, s + length - 1));
}
