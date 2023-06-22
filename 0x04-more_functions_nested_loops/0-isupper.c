#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if input is uppercase
 *
 * Desription - The program prints the alphabet in uppercase using putchar
 *
 * @c: The input alphabet
 *
 * Return: returns 1 for Success or 0 for failure
 */
int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
