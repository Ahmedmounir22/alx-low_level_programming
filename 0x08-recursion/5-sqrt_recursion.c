#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 *			natural square root of a number.
 *
 * @n: input
 * @val: input
 * Return: If n does not have a natural square root
 *		, the function should return -1
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - a function
 *
 * @n: input
 * @val: input
 * Return: integer
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);

}
