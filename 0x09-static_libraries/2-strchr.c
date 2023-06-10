#include "main.h"

/**
 * *_strchr - file memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0' ; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}

	return ('\0');
}
