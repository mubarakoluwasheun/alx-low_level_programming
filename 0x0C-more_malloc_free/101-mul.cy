#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply_numbers(int num1, int num2) {
    return num1 * num2;
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
