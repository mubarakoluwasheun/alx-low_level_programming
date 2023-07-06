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
		int result = n;

		while (result * result > n)
		{
			result = (result + n / result) / 2;
		}
		return (result);
	}
}
