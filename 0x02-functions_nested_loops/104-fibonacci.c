#include <stdio.h>
#include <stdint.h>

/**
 * main - A function that prints the first
 *	  50 fibonacci starting 1 and 2
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int n = 97;
	uint64_t fib1 = 1;
	uint64_t fib2 = 2;
	uint64_t fib3;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 2; i <= n; i++)
	{
		fib3 = fib1 + fib2;
		printf("%lu", fib3);

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
