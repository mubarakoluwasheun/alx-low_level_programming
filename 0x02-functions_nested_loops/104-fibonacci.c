#include <stdio.h>
#include <stdint.h>

/**
 * main - A function that prints the first
 *        98 fibonacci
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int n = 97;
	uint64_t fib1 = 1;
	uint64_t fib2 = 2;
	uint64_t fib1FirstHalf, fib1SecondHalf;
	uint64_t fib2FirstHalf, fib2SecondHalf;
	uint64_t firstHalf, secondHalf;

	printf("%lu, %lu, ", fib1, fib2);

	fib1FirstHalf = fib1 / 1000000000000;
	fib2FirstHalf = fib2 / 1000000000000;
	fib1SecondHalf = fib1 % 1000000000000;
	fib2SecondHalf = fib2 % 1000000000000;

	for (i = 2; i <= n; i++)
	{
		firstHalf = fib1FirstHalf + fib2FirstHalf;
		secondHalf = fib1SecondHalf + fib2SecondHalf;
		if (secondHalf > 999999999999)
		{
			firstHalf += 1;
			secondHalf %= 1000000000000;
		}

		if (firstHalf != 0)
			printf("%lu%012lu", firstHalf, secondHalf);
		else
			printf("%lu", secondHalf);
		if (i < n)
			printf(", ");

		fib1FirstHalf = fib2FirstHalf;
		fib1SecondHalf = fib2SecondHalf;
		fib2FirstHalf = firstHalf;
		fib2SecondHalf = secondHalf;
	}
	printf("\n");
	return (0);
}
