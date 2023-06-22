#include "main.h"

/**
 * print_alphabet - A function that prints 10× alphabet in >
 */
void print_alphabet(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;
		for (j = 0; lower[j] != '\0'; j++)
	{
			_putchar(lower[i]);
	}

		_putchar('\n');
	}
}
