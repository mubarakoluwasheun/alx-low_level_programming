#include <unistd.h>

/**
 * _putchar - A function that writes the character
 *	      c to stdout
 * @c: The chracter parameter
 *
 * Return: returns the write charcater
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
