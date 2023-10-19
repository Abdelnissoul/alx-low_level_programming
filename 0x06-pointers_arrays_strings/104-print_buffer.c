#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int x, y;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
