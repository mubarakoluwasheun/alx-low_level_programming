#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <gmp.h>

/**
 * print_error - A function that allocates
 *		     memory using mall
 *
 * Return: returns a pointer to allocated memory
 */

void print_error(void)
{
    char *error = "Error\n";
    for (int i = 0; error[i]; i++)
        putchar(error[i]);
}

/**
 * main - Implemwntation of the code starts here
 *
 * @argc: count agument
 * @argv: vector argument
 *
 * Return: returns pointer
 */

int main(int argc, char *argv[])
{
    mpz_t num1, num2, result;

    if (argc != 3)
    {
        print_error();
        exit(98);
    }

    mpz_init_set_str(num1, argv[1], 10);
    mpz_init_set_str(num2, argv[2], 10);
    mpz_init(result);

    if (mpz_sgn(num1) <= 0 || mpz_sgn(num2) <= 0)
    {
        print_error();
        exit(98);
    }

    mpz_mul(result, num1, num2);
    mpz_out_str(stdout, 10, result);
    putchar('\n');

    mpz_clear(num1);
    mpz_clear(num2);
    mpz_clear(result);

    return (0);
}
