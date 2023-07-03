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
	int n = 4000000
	uint64_t fib1 = 0;
	uint64_t fib2 = 1;
	uint64_t fib3;
	uint64_t sum = 0;

	for (i = 2; i <= n; i++)
	{
		fib3 = fib1 + fib2;

		if (fib1 % 2 == 0 || fib2 % 2 == 0 || fib3 % 2 == 0)
		{
			sum += n;
		}
		else
		{
			break;
		}
		if (i < n)
		{
			printf(", ");
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%d\n", sum);
	return (0);
}
