#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point of the program
 * Desription - The program reverses a string
 *
 * @s: the parameter of the function
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	int end = 0;
	char swap;
	end = len - 1;

	while (s[len] != '\0')
	{
		len++;
	}
	while (start < end)
	{
		swap = s[start);
		s[start] = s[end];
		s[end] = swap;

		start++;
		end--;
	}
}
