#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the size of various types using 'print>
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char alphAbet = 'A'; alphAbet <= 'Z'; alphAbet++)
	{
		char lowerCase;
		lowerCase = tolower(alphAbet);

		putchar("%c\n", lowerCase)
	}
	return (0);
}
