#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: the string we will printed it
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swap the string by loopingto half the string*/
	for i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array start from 0*/
		s[l - 1 - i] = temp;
	}

}
