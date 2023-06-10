#include "main.h"

/**
 * _strspn - gets the length of a perfix substring
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (a);
}

