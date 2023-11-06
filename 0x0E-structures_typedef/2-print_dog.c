#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Description: if NULL it prints 'nil', Otherwise elements
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
