#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: the input integer
 *
 * Return: -1 If n is lower than 0, else return n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial((n - 1)));

}
