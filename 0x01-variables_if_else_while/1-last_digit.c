#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints the size of various types using 'print>
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
	int lastDigit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

        printf("Last digit of %d is", n);

        if (lastDigit > 5)
        {
                printf(" and is greater than 5\n", n);
        }
        else
{
		if (lastDigit == 0)
        {
                printf(" and is 0\n", n);
        }
        	else
        {
                printf(" and is less than 6 and not 0\n", n);
	}
}
	return (0);

}
