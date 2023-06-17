include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Desription - The program prints all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		int firstDigitI = i / 10;
		int secondDigitI = i / 10;

		for (j = i; j <= 99; j++)
		{
			int firstDigitJ = j / 10;
			int secondDigitJ = j / 10;

			putchar('0' + firstDigitI)
			putchat('0' + secondDigitI);
			putchar(' ');
			putchar('0' + firstDigitJ);
			putchar('0' + secondDigitJ);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

