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
	uint64_t fib1FirstHalf, fib1SecondHalf;
	uint64_t fib2FirstHalf, fib2SecondHalf;
	uint64_t firstHalf, secondHalf;

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

	fib1FirstHalf = fib1 / 1000000000000;
	fib2FirstHalf = fib2 / 1000000000000;
	fib1SecondHalf = fib1 / 1000000000000;
	fib2SecondHalf = fib2 / 1000000000000;

	for (i = 2; i <= n; i++)
	{
		firstHalf = fib1FirstHalf + fib2FirstHalf;
		secondHalf = fib1SecondHalf + fib2SecondHalf;
		if (fib1SecondHalf + fib2SecondHalf > 999999999999)
		{
			firstHalf += 1;
			secondHalf %= 1000000000000;
		}

		printf("%lu%lu", firstHalf, secondHalf);
		if (i < n)
			printf(", ");

		fib1FirstHalf = fib2firstHalf;
		fib1SecondHalf = fib2SecondHalf;
		fib2FirstHalf = firstHalf;
		fib2SecondHalf = secondHalf;
	}
	printf("\n");
	return (0);
}
