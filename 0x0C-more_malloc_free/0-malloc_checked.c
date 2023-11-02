#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: exit with 98 (Success), pointer (fail)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
<<<<<<< HEAD

=======
>>>>>>> d5eb9d2ae1448fcf5563253116c7f05c4329aad7
