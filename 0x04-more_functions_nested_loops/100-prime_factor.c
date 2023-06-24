#include "main.h"
#include <stdio.h>

/**
 * main - implementation of the code starts here
 *
 * Description - print prime factor of a certain mumber
 *
 * @number: the input number
 *
 * @factor: the variable that holds factor of number
 *
 * Return: returns result
 */

long long largestPrime(long long number)
{
	long long factor = 2;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			number /= factor;
		}
		else
		{
			factor++;
		}
	}
	return (factor);
}


int main(void)
{
	long long number = 612852475143;
	long long largestPrimeFactor = largestPrime(number);

	printf("%lld\n", largestPrimeFactor);

	return (0);
}
