#include "main.h"

/**
 * *array_range - a function that creates an array of integers
 * @min: input
 * @max: input
 * Return: integer
 */

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		if (!ptr)
			return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
