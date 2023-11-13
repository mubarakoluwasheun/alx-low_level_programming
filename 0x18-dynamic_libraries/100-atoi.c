#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int index, sign_count, number, str_length, first_digit_found, current_digit;

	index = 0;
	sign_count = 0;
	number = 0;
	str_length = 0;
	first_digit_found = 0;
	current_digit = 0;

	while (str[str_length] != '\0')
		str_length++;

	while (index < str_length && first_digit_found == 0)
	{
		if (str[index] == '-')
			++sign_count;

		if (str[index] >= '0' && str[index] <= '9')
		{
			current_digit = str[index] - '0';
			if (sign_count % 2)
				current_digit = -current_digit;
			number = number * 10 + current_digit;
			first_digit_found = 1;
			if (str[index + 1] < '0' || str[index + 1] > '9')
				break;
			first_digit_found = 0;
		}
		index++;
	}

	if (first_digit_found == 0)
		return (0);

	return (number);
}
