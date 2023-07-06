#include "main.h"

/**
 * _sqrt_recursion - A function that returns the
 *		    square root of a number
 *
 * @n: input parameter of the function
 *
 * Return: Always 0(success)
 */

int sqrt_recursive(int n, int guess)
{
    if (n < 0)
    {
        return -1;
    }

    if (guess * guess == n)
    {
        return guess;
    }

    if (guess * guess > n)
    {
        return sqrt_recursive(n, guess - 1);
    }

    return sqrt_recursive(n, guess + 1);
}

int _sqrt_recursion(int n)
{
    return sqrt_recursive(n, 0);
}
