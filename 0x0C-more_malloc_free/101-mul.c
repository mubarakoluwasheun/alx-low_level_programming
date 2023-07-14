#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <libbig.h>

void multiply_numbers(const char* num1_str, const char* num2_str, char* result_str) {
    BigNum num1, num2, result;
    BigNum_Init(&num1);
    BigNum_Init(&num2);
    BigNum_Init(&result);

    BigNum_SetDecimal(&num1, num1_str);
    BigNum_SetDecimal(&num2, num2_str);

    BigNum_Multiply(&result, &num1, &num2);

    BigNum_GetDecimal(&result, result_str, sizeof(result_str));

    BigNum_Free(&num1);
    BigNum_Free(&num2);
    BigNum_Free(&result);
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

    char result_str[1024];

    multiply_numbers(argv[1], argv[2], result_str);

    printf("%s\n", result_str);

    return 0;
}
