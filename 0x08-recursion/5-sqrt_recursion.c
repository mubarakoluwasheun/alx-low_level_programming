#include "main.h"

/**
 * _sqrt_recursion - A function that returns the
 *		    square root of a number
 *
 * @n: input parameter of the function
 *
 * Return: Always 0(success)
 */

int _sqrt_recursion(int n)
{
	int natSquare = _sqrt_recursion(n / 2);

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}

	else
	{
		if (natSquare * natSquare == n)
		{
			return (natSquare);
		}
		else
		{
			return (-1);
		}
	}
}
