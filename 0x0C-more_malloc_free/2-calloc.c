#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: input
 * @b: input
 * @n: input
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: input
 * @size: input
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (size == 0 || nemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
