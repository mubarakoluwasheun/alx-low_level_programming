#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the alphabet in lowercase using putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		char  lowercase;
		lowercase = tolower(alphabet);

		putchar(lowercase);
		putchar('\n');
	}
	return (0);
}
