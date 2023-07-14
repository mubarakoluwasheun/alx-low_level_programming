#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply_numbers - A function that multiplies two
 *			 positive integers
 *
 * @num1: first input integer
 * @num2: second input integer
 *
 * Return: Always 0(success)
 */
int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

/**
 * _memset - A function that checks if input
 *           integer is positive
 *
 * @str: string parameter of the function
 *
 * Return: Always 0(success)
 */
int is_positive_integer(const char* str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
    return (1);
}

/**
 * main - Execution of the code starts here
 *        
 *
 * @argc: count parameter of the function
 * @argv: vector parameter of the function
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[]) {
    int num1, num2;
	int result;

    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2])) {
        printf("Error\n");
        return 98;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    result = multiply_numbers(num1, num2);
    printf("%d\n", result);

    return 0;
}
