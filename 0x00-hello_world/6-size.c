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

	printf("The size of a char is: %zu.\n", sizeof(c));
	printf("The size of an int is: %zu.\n", sizeof(i));
	printf("The size of a long int is: %zu.\n", sizeof(li));
	printf("The size of a long long int is: %zu.\n", sizeof(lli));
	printf("The size of a float is: %zu.\n", sizeof(f));
	return (0);
}
