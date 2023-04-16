#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *		followed by a new line
 *
 *@a: array that will printed
 *@n: the number of elements of the array to be printed
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
