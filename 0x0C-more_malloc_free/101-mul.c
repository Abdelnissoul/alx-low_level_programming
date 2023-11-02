#include "main.h"

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
return (0);
}
