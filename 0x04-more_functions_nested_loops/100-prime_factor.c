#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - code implementation starts here
 *
 * @largestPrime - a function that prints
 *
 * Description - print prime factor of a certain mumber
 *
 * @number: the input number
 * @lPrimeFactor: variable that holds number
 * Return: returns result
 */

long largestPrime(long number)
{
	long lPrimeFactor = -1;
	long i;

	while (number % 2 == 0)
	{
		lPrimeFactor = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			lPrimeFactor = i;
			number /= i;
		}
	}
	if (number > 1)
	{
		lPrimeFactor = number;
	}

	return (lPrimeFactor);
}


int main(void)
{
	long number = 612852475143;
	long lPrimeFactor = largestPrime(number);

	printf("%ld\n", lPrimeFactor);

	return (0);
}
