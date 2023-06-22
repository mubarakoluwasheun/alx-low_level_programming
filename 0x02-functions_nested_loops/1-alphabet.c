#include "main.h"

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the lower case of alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; lower[i] != '\0'; i++)
	{
		_putchar(lower[i]);
	}
	_putchar('\n');
}
