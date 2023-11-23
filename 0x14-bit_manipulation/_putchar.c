#include <unistd.h>
/**
 * _putchar - writes a char to stdout
 * @c: the char to print
 * Return: 1 (S); -1 (F)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
