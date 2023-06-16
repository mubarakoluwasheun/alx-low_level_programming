#include <stdio.h>

/**
* main - Entry point
*
* Description : the program prints a word using the function 'put'
* function main starts code compilation here
*
* Return : always 0 (Success)
*/
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a float is: %f.\n", (unsigned long)sizeof(f));
	printf("The size of a long int is: %ld.\n",(unsigned long)sizeof(li));
	printf("The size of a long long int is: %lld.\n", (unsigned long)sizeof(lli);
	return(0);
}
