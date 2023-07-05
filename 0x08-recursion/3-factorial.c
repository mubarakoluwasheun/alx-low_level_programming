#include "main.h"

/**
 * factorial - A function that prints the factorial
 *             of a number
 *
 * @n: input parameter of the function
 *
 * Return: Always 0(success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n = 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
