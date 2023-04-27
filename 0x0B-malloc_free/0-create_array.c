#include "main.h"

/**
 * *create_array -  a function that creates an array of chars,
 *			and initializes it with a specific char
 * @size: input
 * @c: input
 * Return: Returns NULL if size = 0,Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	
	while (size--)
		n[size] = c;

	return (n);
}
