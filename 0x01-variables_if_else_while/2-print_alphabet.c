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
	char alphAbet;
	char  lowerCase;
	lowerCase = tolower(alphAbet);

	for (alphAbet = 'A'; alphAbet <= 'Z'; alphAbet++)
	{
		putchar(lowerCase);
	}
	putchar("\n");
	return (0);
}
