#include "main.h"

/**
 * multiply - Multiplies two positive numbers
 * @num1: First positive number as a string
 * @num2: Second positive number as a string
 *
 * Return: Result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
    /* Implementation of multiplication using _putchar goes here */
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    /* Check if num1 and num2 only contain digits using _putchar */

    char *result = multiply(num1, num2);

    if (result != NULL)
    {
        /* Print the result using _putchar */
        free(result);
    }
    else
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return 98;
    }

    return 0;
}

