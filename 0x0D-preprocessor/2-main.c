#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the name of the file
 *	  it was compiled from
 *
 * Return : Always 0(Success)
 */
int main()
{
	printf("File : %s\n", __FILE__);
	return (0);
}
