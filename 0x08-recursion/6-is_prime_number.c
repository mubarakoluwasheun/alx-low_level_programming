#include "main.h"

/**
 * is_prime_number - A function that prints the prime
 *		     number of n
 *
 * @n: input (integer) parameter of the function
 *
 * Return: Always 0(success)
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
