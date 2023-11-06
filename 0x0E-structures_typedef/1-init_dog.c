#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: a function initializes struct dog with values
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
