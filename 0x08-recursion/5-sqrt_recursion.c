#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - A function that returns natural square root of a number
 * @n: Number to print its square root.
 * Return: returns square root or -1.
 */
int _sqrt_recursion(int n)
{
	int sqrt = 1;

	while (sqrt * sqrt < n)
		sqrt++;

	if ((sqrt * sqrt) > n)
	{
		return (-1);
	}
	else if ((sqrt * sqrt) == n)
	{
		return (sqrt);
	}
	else
		return (_sqrt_recursion(n + 1));
}
