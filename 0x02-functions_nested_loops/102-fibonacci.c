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
	int n = 49;
	unsigned long long fib1 = 1;
	unsigned long long fib2 = 2;
	unsigned long long fib3;

	printf("%llu, %llu, ", fib1, fib2);

	for (i = 2; i <= n; i++)
	{
		fib3 = fib1 + fib2;
		printf("%llu", fib3);

		if (i < n)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
