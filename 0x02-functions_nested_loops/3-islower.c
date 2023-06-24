#include "main.h"

/**
 * _islower - A function that checks if alphabet is in lowercase
 *
 * @c: the parameter of the _islower function
 *
 * Return:  returns 1 if true or 0 otherwise
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
