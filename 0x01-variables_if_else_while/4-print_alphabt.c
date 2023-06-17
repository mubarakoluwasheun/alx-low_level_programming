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

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
		char lowercase = tolower(alphabet);

		putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
