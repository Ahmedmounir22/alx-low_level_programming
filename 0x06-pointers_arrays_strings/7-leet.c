#include "main.h"

/**
 * leet - encodes a string ints 1337
 * @c: string
 * Return: string that is encode
 */

char *leet(char *c)
{
	char *cp = c;
	char key[] = { 'A', 'E', 'O', 'T', 'L'};
	int value[] = { 4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			/*32 is the difference between lower case letter and aper case letter */
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}

	return (cp);
}
