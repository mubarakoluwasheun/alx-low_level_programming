#include <stdio.h>







void printFibonacciNumbers(int n)
{
	int firstFib = 1;
	int secondFib = 2;
	int i;

	printf("%d, %d", firstFib, secondFib);

	for (i = 3; i <= n; i++)
	{
		next = firstFib + secondFib;
		printf(", %d", next);
		firstFib = secondFib;
		secondFib = next;
	}
}

int main()
{
	printFibonacciNumbers(50);
	printf("\n");

	return 0;
}
