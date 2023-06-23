#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print a triangle using the character #
 *
 * Description - print triangle using _putchar
 *
 * @size: the size of the triangle
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
