#include "3-calc.h"

	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: summation of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts two inegers
 * @a: first integer
 * @b: second one
 * Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - products of a and b
 * @a: first int
 * @b: second one
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - result of the division between two integers
 * @a: first int
 * @b: second int
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of the division
 * @a: first int
 * @b: second int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
