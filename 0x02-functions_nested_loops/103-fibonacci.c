#include <stdio.h>
#include <stdint.h>

/**
 * main - A function that prints the sum of
 *	  fibonacci sequence whose values
 *	  does not exceed 4000000
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int n = 4000000;
	uint64_t fib1 = 0;
	uint64_t fib2 = 1;
	uint64_t fib3;
	uint64_t sum = 0;

	while (fib1 <= n)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%lu\n", sum);
	return (0);
}
