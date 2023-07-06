#include "main.h"

/**
 * is_prime_number - A function that prints the prime
 *		     number of n
 *
 * @n: input (integer) parameter of the function
 *
 * Return: Always 0(success)
 */

int is_prime_recursive(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }

    if (n % i == 0)
    {
        return 0;
    }

    return is_prime_recursive(n, i - 1);
}

int  is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    return is_prime_recursive(n, n - 1);
}
