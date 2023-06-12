#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 *		and initializes it with a specific char
 * @size: integer input
 * @c: inputcharachter
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c);
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
