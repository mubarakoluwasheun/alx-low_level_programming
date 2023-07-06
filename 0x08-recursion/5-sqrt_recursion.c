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
        return -1; // Square root of negative numbers is undefined
    }

    if (guess * guess == n)
    {
        return guess; // Base case: Found the square root
    }

    if (guess * guess > n)
    {
        return sqrt_recursive(n, guess - 1); // Guess was too high, try a lower value
    }

    return sqrt_recursive(n, guess + 1); // Guess was too low, try a higher value
}

int _sqrt_recursion(int n)
{
    return sqrt_recursive(n, 0);
}
