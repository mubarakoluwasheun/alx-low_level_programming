#include "main.h"

/**
 * _pow_recursion - A function that prints the power
 *		    of an integer
 *
 * @x: first (integer) parameter of the function
 * @y: second (index) parameter of the function
 *
 * Return: Always 0(success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return(-1);
	}
	else if (y == 0)
	{
		return(1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1);
	}
}
