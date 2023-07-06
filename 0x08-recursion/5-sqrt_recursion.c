#include "main.h"

/**
 * sqrt_recursive - A function that returns the
 *		     square root of a number
 *
 * @n: input parameter of the function
 * @currentGuess: the current guess for the sqrt
 *
 * Return: Always 0(success)
 */

int sqrt_recursive(int n, int currentGuess)
{
	if (n < 0)
	{
		return (-1);
	}

	if (currentGuess * currentGuess == n)
	{
		return (currentGuess);
	}

	if (currentGuess * currentGuess > n)
	{
		return (sqrt_recursive(n, currentGuess - 1));
	}
	return (sqrt_recursive(n, currentGuess + 1));
}

/**
 * _sqrt_recursion - A function that generates
 *                  the natural square root of n
 *
 * @n: input (integer) parameter of the function
 *
 * Return: Always 0(success)
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 0));
}
