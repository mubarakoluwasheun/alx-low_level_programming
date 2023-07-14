#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * malloc_checked - A function that allocates
 *		     memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to allocated memory
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
