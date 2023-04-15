#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 *
 * @str: the pointer we will printed it.
 *
 * RETURN: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');

}
