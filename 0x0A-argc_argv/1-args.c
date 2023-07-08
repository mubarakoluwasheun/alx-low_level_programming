#include <stdio.h>

/**
 * main - A function that prints number of
 *        arguments follow by a new line
 *
 * @argc: Argument count of the function
 * @argv: Argument vector of the function
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
