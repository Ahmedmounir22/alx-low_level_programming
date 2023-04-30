#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc.
 * @b: input
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
