#include <stdio.h>

/**
 * main - A function that sum the
 *	         multiples of both 5 and 3
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n <= 1023; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
			printf("%d\n", sum);
		}
	}
	return (0);
}
