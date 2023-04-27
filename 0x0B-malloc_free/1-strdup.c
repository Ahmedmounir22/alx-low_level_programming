#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newly allocated space in memory
 * @str: input
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/*+1 on the size puts the end of string charachter*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
