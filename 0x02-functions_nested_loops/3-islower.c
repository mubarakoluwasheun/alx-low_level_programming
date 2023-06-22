#include "main.h"

/**
 * is_lower - A function that returns 1 or 0 if the alphabet is in lowercase
 *
 * c - the parameter of the _islower function, represents the checking character
 *
 * Return - returns 1 if true or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
