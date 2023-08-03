#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Function that returns 1 if inpt integer is
 * a prime number, otherwise returns 0
 * @n: the input integer.
 *
 * Return: Returns 1 for prime number, else returns 0.
 */
int is_prime_number(int n)
{

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_number(n));

	if ((n % 1 == 0) && (n % 2 == 0))
	{
		return (0);
	}
		return (is_prime_number((n % 1 != 0) && (n % n != 0)));
}
