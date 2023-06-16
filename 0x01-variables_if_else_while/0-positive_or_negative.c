#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints a random number everytime it is called
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf(n);

	if (n > 0)
	{
		printf("is positive.\n");
	}
	else if (n == 0)
	{
		printf("is zero.\n");
	}
	else
	{
		printf("is negative.\n");
	}
	return (0);
}
