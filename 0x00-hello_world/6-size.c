#include <stdio.h>

#include <stdio.h>
/**
 * Main - Entry point of the program
 *
 * Desription - The program prints the size of various types using 'printf'
 *
 * Return - Return 0 to indicate successful program execution
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a float is: %f.\n", (unsigned long)sizeof(li));
	printf("The size of a long int is: %ld.\n",(long long int)sizeof(lli));
	printf("The size of a long long int is: %lld.\n", (double)sizeof(f));
	return (0);
}
