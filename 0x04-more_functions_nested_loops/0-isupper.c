#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the alphabet in uppercase using putchar
 *
 * @c - The constant variable
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}
