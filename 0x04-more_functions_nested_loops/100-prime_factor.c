#include "main.h"
#include <stdio.h>
#include <math.h>

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
	int largestPrimeFactor = -1;
	int i;

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
	int number = 612852475143;
	int largestPrimeFactor = largestPrime(number);

	printf("%d\n", largestPrimeFactor);

	return (0);
}
