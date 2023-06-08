#include "main.h"
#include <stdio.h>
/**
 * factorial - A function that prints the factorial of a given number
 * @n: The number whose factorial is to be printed.
 *
 * Return: Returns -1 if n < 0
 * returns factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
