#include "main.h"

/**
 * print_alphabet - A function that prints alphabet in lowercase
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
