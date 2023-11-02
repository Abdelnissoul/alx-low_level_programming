#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers
 * @num1: First positive number as a string
 * @num2: Second positive number as a string
 *
 * Return: Result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, k, mul, carry = 0;
    char *result;

    while (num1[len1])
        len1++;

    while (num2[len2])
        len2++;

    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1 + len2; i++)
        result[i] = '0';

    result[i] = '\0';

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            mul = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = mul / 10;
            result[i + j + 1] = (mul % 10) + '0';
        }
        result[i + j + 1] = carry + '0';
    }

    if (result[0] == '0')
    {
        for (k = 0; result[k] != '\0'; k++)
            result[k] = result[k + 1];
    }

    return (result);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    // Check if num1 and num2 only contain digits
    for (int i = 0; num1[i] != '\0'; i++)
    {
        if (num1[i] < '0' || num1[i] > '9')
        {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++)
    {
        if (num2[i] < '0' || num2[i] > '9')
        {
            printf("Error\n");
            return 98;
        }
    }

    char *result = multiply(num1, num2);

    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    else
    {
        printf("Error\n");
        return 98;
    }

    return 0;
}
