#include <stdio.h>

/**
 * main - A function that prints the first
 *	  50 fibonacci starting 1 and 2
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int n = 50;
	int fib1 = 1;
	int fib2 = 2;
	int fib3;

	for (i = 2; i <= n; i++)
	{
		fib3 = fib1 + fib2;
		printf("%d, ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%d, %d, ", fib1, fib2);
	printf("\n");
	return (0);
}
