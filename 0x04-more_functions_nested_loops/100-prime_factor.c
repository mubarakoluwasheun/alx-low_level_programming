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

int largestPrime(int number)
{
	int factor = 2;

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
	int number = 612852475143;
	int largestPrimeFactor = largestPrime(number);

	printf("%lld\n", largestPrimeFactor);

	return (0);
}
