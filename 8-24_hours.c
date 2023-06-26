#include "main.h"

/**
 * jack_bauer - A function that prints every minutes
 *		of the day of jack bauer
 *
 * Return: no returns value
 */
void jack_bauer(void)
{
	int hrs;
	int mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + hrs / 10);
			_putchar('0' + hrs % 10);
			_putchar(':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			_putchar('\n');
		}
	}
}
