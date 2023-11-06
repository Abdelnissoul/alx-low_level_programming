#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a dog's attributes
 * @name: the name of the dog
 * @age: its age
 * @owner: the owner
 * Description: struct of the dog attribution
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
