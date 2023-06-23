#include "main.h"
#include <stdio.h>

/**
 * print_square - print the square using the character #
 *
 * Description - print square using _putchar
 *
 * @size: the size of the square
 *
 * Return: no return value
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
