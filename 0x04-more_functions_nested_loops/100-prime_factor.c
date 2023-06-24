#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largestPrime - a function that prints the largest prime
 *
 * Description - print prime factor of a certain mumber
 *
 * @number: the input number
 *
 * @largestPrimeFactor: the variable that holds factor of number
 *
 * Return: returns result
 */

long largestPrime(long number)
{
	long largestPrimeFactor = -1;
	long i;

	while (number % 2 == 0)
	{
		largestPrimeFactor = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestPrimeFactor = i;
			number /= i;
		}
	}
	if (number > 1)
	{
		largestPrimeFactor = number;
	}

	return (largestPrimeFactor);
}


int main(void)
{
	long number = 612852475143;
	long largestPrimeFactor = largestPrime(number);

	printf("%ld\n", largestPrimeFactor);

	return (0);
}
