#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largestPrime - a function that prints the largest prime
 *
 * Description - print prime factor of a certain mumber
 *
 * @number: the input number
 * @lFactor: variable that holds number
 * Return: returns result
 */

long largestPrime(long number)
{
	long lFactor = -1;
	long i;

	while (number % 2 == 0)
	{
		lFactor = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			lFactor = i;
			number /= i;
		}
	}
	if (number > 1)
	{
		lFactor = number;
	}

	return (lFactor);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long number = 612852475143;
	long lFactor = largestPrime(number);

	printf("%ld\n", lFactor);

	return (0);
}
