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
		int start = 1;
		int end = n;
		int result = -1;


		while (start <= end)
		{
			int mid = (start + end) / 2;
			int square = mid * mid;

			if (square == n)
			{
				return (mid);
			}
			else if (square < n)
			{
				start = mid + 1;
				result = mid;
			}
			else
			{
				end = (mid - 1);
			}
		}
		return (result);
	}
}
