#include <stdio.h>

/**
 * main - A function that prints the first
 *	  50 fibonacci starting 1 and 2
 *
 * Return: Always 0(success)
 */
int main(void)
{
	unsigned int i;
	unsigned int n = 49;
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int fib3;

	printf("%d, %d, ", fib1, fib2);

	for (i = 2; i <= n; i++)
	{
		fib3 = fib1 + fib2;
		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
