#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * malloc_checked - A putchar function
 *
 * @c: parameter of the function
 *
 * Return: returns a pointer to allocated memory
 */

void _putchar(char c)
{
    write(1, &c, 1);
}

/**
 * print_int - A funcion that print int
 *
 * @n: input of the funxtion
 *
 * Return: Always 0(success)
 */
void print_int(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_int(n / 10);

    _putchar(n % 10 + '0');
}

/**
 * main- A function that multiplies two
 *      integers
 *
 * @argc: count parameter of the function
 * @argv: vector parameter of the function
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        write(2, "Error\n", 6);
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    if (num1 <= 0 || num2 <= 0)
    {
        write(2, "Error\n", 6);
        exit(98);
    }

    result = num1 * num2;
    print_int(result);
    _putchar('\n');

    return (0);
}
