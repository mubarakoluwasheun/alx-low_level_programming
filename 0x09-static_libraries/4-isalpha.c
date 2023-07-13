#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 *
 * @c: the parameter of the _isalpha function
 *
 * Return:  returns 1 if true or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
