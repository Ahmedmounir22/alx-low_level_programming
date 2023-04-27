#include "main.h"

#include <stdio.h>

/**
 * is_prime_number - a function that returns 1 if the input
 *		integer is a prime number, otherwise return 0.
 *
 * @n: input
 *
 * Return: integer
 */
int check_prime(int n, int other);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they divided it
 * @n: input
 * @other: input
 * Return: int
 */

int check_prime(int n, int other)
{

	if (other >= n && n > 1)
		return (1);
	else if (n % other == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, other + 1));
}
