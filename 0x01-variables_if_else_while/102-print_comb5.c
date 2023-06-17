#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints all possible combinations of two two-digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			if (num1 != 98 || num2 != 98)
			{
				putchar('0' + num1 / 10);
				putchar('0' + num1 % 10);
				putchar(' ');
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
