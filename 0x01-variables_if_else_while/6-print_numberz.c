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
	int base10;

	for (base10 = 0; base10 < 10; base10++)
	{
		putchar("%d");
		putchar(base10);
	}
	return (0);
}
