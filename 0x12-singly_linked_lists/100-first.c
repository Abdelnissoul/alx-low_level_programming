#include <stdio.h>

void before_start(void)__attribute__((constructor));
/**
 * before_start - prints a specific message before the main
 * Return: void or the message
 */
void before_start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
