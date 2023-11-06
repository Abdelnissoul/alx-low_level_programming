#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *same_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	same_owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_name == NULL || same_owner == NULL)
	{
		free(new_name);
		free(same_owner);
		free(new_dog);
	
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(same_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = same_copy;

	return (new_dog);
}
