#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Printing the last digit of a random integer when it is generated.
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int l_digit;
l_digit = n%10;
if (l_digit > 5)
printf("last digit of %d is %d  and is greater than 5\n",n ,l_digit);
else if (l_digit == 0)
printf("last digit of %d is %d and is zero\n",n ,l_digit);
else 
printf("last digit of %d is %d and is less than 6 and not 0\n",n ,l_digit);
return (0);
}
