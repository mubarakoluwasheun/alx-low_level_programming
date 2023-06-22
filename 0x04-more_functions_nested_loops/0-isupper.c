#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the alphabet in uppercase using putchar
 *
 * @c - The constant variable
 *
 * Return: returns 1 for Success
 *
 * Return: returns 0 for failure
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
