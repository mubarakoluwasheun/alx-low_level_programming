#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_error()
{
    char *error = "Error\n";
    int i;
    for (i = 0; error[i]; i++)
        putchar(error[i]);
}

void reverse_str(str)
char *str;
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

char *multiply(num1, num2)
char *num1;
char *num2;
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len_result = len1 + len2;
    char *result = calloc(len_result + 1, sizeof(char));
    int i, j;

    for (i = 0; i < len_result; i++)
        result[i] = '0';

    for (i = len1 - 1; i >= 0; i--)
        for (j = len2 - 1; j >= 0; j--)
        {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = (result[i + j + 1] - '0') + product;
            result[i + j + 1] = (sum % 10) + '0';
            result[i + j] += sum / 10;
        }

    for (i = 0; result[i]; i++)
        if (result[i] > '9')
        {
            int carry = result[i] - '0';
            result[i] = (carry % 10) + '0';
            result[i - 1] += carry / 10;
        }

    while (*result == '0' && *(result + 1))
        result++;

    reverse_str(result);
    return result;
}

int main(argc, argv)
int argc;
char *argv[];
{
    char *num1, *num2, *result;
    int i;

    if (argc != 3)
    {
        print_error();
        exit(98);
    }

    num1 = argv[1];
    num2 = argv[2];

    for (i = 0; num1[i]; i++)
        if (num1[i] < '0' || num1[i] > '9')
        {
            print_error();
            exit(98);
        }

    for (i = 0; num2[i]; i++)
        if (num2[i] < '0' || num2[i] > '9')
        {
            print_error();
            exit(98);
        }

    result = multiply(num1, num2);
    printf("%s\n", result);

    free(result);
    return (0);
}

