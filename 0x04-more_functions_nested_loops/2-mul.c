#include "main.h"
#include <stdio.h>

/**
 * mul - multiply two digits
 *
 * Description - print the multiple of digits
 *
 * @a: first input digit
 * @b: second input digit
 *
 * Return: returns 0 (Success)
 */
int mul(int a, int b)
{
	int multiple;
	multiple = (a * b);

	_putchar('0' + multiple);
	return (0);
}
