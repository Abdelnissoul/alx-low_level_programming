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
    char *name_copy, *owner_copy;

    /* Allocate memory for the new dog */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory for name and owner copies */
    name_copy = malloc(sizeof(char) * (strlen(name) + 1));
    owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));

    if (name_copy == NULL || owner_copy == NULL)
    {
        free(name_copy);
        free(owner_copy);
        free(new_dog);
        return (NULL);
    }

    /* Copy name and owner to the allocated memory */
    strcpy(name_copy, name);
    strcpy(owner_copy, owner);

    /* Initialize the new dog */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}
