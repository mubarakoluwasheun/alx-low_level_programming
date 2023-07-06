#include "main.h"

/**
 * is_prime_checker - A function that checks the prime
 *		     number of n
 *
 * @n: input (integer) parameter of the function
 * @i: the iterative paramater of the function
 *
 * Return: Always 0(success)
 */
int is_prime_checker(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_checker(n, i - 1));
}

/**
 * is_prime_number - A function that prints the prime
 *                   number of n
 *
 * @n: input (integer) parameter of the function
 *
 * Return: Always 0(success)
 */
int  is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_checker(n, n - 1));
}
