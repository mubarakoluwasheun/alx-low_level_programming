#include "main.h"

/**
 * print_number - Entry point of the program
 * Desription - The program changes all lowercase
 *              letters of a string to uppercase
 *
 * @n: the first parameter of the function
 * Return: Always 0 (Success)
 */

void print_number(int n) {
    if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int power = 1;
    int temp = n;

    while (temp > 9) {
        power *= 10;
        temp /= 10;
    }

    while (power > 0) {
        int digit = n / power;
        _putchar('0' + digit);
        n %= power;
        power /= 10;
    }
}
