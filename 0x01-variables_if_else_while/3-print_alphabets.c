#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints alphabet in both lower and lowercase
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
	}

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		char uppercase;

		uppercase = toupper(alphabet);
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
