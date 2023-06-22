#include "main.h"

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

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the lower case of alphabets
 * Function print alphabet - prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	print_alphabet();
	return (0);
}
