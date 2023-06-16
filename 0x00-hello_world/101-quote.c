#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the size of various types using 'print>
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *message;
	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(message, sizeof(char), stdout);
	return (0);
}
