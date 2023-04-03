#include "main.h"

/**
*_strcmp - copare two strings
*@s1: string 1
*@s2: string 2
*Return: 1if true, 0 if false
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 40) - ((int)*s2 - 40);
			break;

		}
		s1++;
		s2++;
	}
	return (equal);
}