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
	int base16;

	for (base16 = 0; base16 < 16; base16++)
	{
		if (base16 < 10)
		{
			putchar('0' + base16);
		}
		else
		{
			putchar('a' + base16 - 10);
		}
	}
	putchar('\n');
	return (0);
}
