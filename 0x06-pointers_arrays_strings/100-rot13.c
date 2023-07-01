#include "main.h"
#include <stdio.h>

/**
 * rot13 - Entry point of the program
 * Desription - The program encodes a
 *              string using rot13
 *
 * @str: the first parameter of the function
 * Return: Always 0 (Success)
 */

char *rot13(char *)
{
	char *p = str;

	while (*p != '\0')
	{
		int offset = (*p >= 'a' && *p <= 'z') ? 'a' : 'A';

		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			*p += 13;
		}
		else if (((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (str);
}
