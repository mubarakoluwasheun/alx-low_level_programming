#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the alphabet in lowercase using putcha>
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet >= 'z'; alphabet--)
	{
		putchar('z' + alphabet);
	}
	putchar('\n');
	return (0);
}
