#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <gmp.h>

void multiply_numbers(const char* num1_str, const char* num2_str, char* result_str) {
    mpz_t num1, num2, result;
    mpz_init(num1);
    mpz_init(num2);
    mpz_init(result);

    mpz_set_str(num1, num1_str, 10);
    mpz_set_str(num2, num2_str, 10);

    mpz_mul(result, num1, num2);

    mpz_get_str(result_str, 10, result);

    mpz_clear(num1);
    mpz_clear(num2);
    mpz_clear(result);
}

int is_positive_integer(const char* str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
	char result_str[1024];

    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2])) {
        printf("Error\n");
        return 98;
    }

    multiply_numbers(argv[1], argv[2], result_str);

    printf("%s\n", result_str);

    return 0;
}
