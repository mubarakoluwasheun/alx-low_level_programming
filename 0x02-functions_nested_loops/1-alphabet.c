#include "main.h"

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the lower case of alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);?
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i != '\0'; i++)
	{
		putchar(lower[i]);
	}
	putchar('\n');
	return (0);

int main()
{
	print_alphabet();
	return (0);
}
