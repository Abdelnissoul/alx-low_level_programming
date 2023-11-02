#include "main.h"

/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: First positive number as a string
 * @num2: Second positive number as a string
 *
 * Return: Result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
    /* Implementation of multiplication goes here */
}

int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    char *result = multiply(num1, num2);

    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }

    return 0;
}

