#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the alphabet in lowercase using putcha>
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
