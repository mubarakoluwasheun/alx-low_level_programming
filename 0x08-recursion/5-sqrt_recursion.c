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
	natSquare = n * n;

	if (natSquare == n)
	{
		return (n);
	}
	else if (natSquare > n)
	{
		return (_sqrt_recursion(n - 1);
	}

	else
	{
		return (-1);
	}
}
