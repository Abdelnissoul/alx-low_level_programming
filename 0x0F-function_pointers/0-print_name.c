#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -prints a name
 * @name: name of the person
 * @f: pointer to a function that will return void
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
