#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to change for an amount of money.
 * @argc: Number
 * @argv: Array
 * Return: 0 on success, 1 on error
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int cents, money_val = 0, a;
    int money[5] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    for (a = 0; a < 5; a++)
    {
        money_val += cents / money[a];
        cents %= money[a];
    }

    printf("%d\n", money_val);

    return 0;
}
