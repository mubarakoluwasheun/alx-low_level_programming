#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the size of various types using 'print>
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char message[];
	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	size_t size = sizeof(char);
	size_t length = strlen(message);

	fwrite(message, size, length, stdout);
	return (1);
}
