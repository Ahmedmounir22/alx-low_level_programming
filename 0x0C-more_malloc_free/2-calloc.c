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

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(sizeof(int) * nmemb);

	if (a == 0)
		return (NULL);

	_memset(a, 0, sizeof(int) * nmemb);

	return (a);
}
