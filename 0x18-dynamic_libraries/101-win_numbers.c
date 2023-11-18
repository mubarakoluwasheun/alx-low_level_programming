#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * rand - Overrides the rand() function to generate winning numbers
 *
 * Return: The next winning number from the sequence
 */
int rand(void)
{
	static int count = 0;
	int winning_numbers[] = {9, 8, 10, 24, 75, 9}; // Desired winning numbers
	int total_numbers = sizeof(winning_numbers) / sizeof(winning_numbers[0]);

	// Seed the random number generator
	srand(time(NULL));

	// Return the winning numbers sequentially
	if (count < total_numbers)
	{
		return winning_numbers[count++];
	}
	else
	{
		return rand(); // Fallback to default rand() behavior
	}
}
