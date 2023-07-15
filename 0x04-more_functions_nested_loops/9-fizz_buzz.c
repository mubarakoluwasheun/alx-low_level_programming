#include <stdio.h>

/**
 * main - code implementation starts here
 *
 * Description - print fizzbuzz according to some conditions
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if  (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (i == 100)
			{
				printf("\n");
			}
			printf("%d ", i);
		}
	}
	return (0);
}
