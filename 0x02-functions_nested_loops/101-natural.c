#include "main.h"
#include <stdio.h>

/**
 * natural_num - A function that sum the
 *	         multiples of both 5 and 3
 *
 * Return: no return value
 */
int natural_num(int n)
{
	int sum = 0;

	for (n = 0; n <= 1023; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
			return (sum);
		}
	}
	printf("%d\n", sum);
}
