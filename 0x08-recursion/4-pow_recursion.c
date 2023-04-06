#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - A function that returns the value of x raised to power y
 * @x: The base integer.
 * @y: The power integer.
 *
 * Return: returns -1 if y < 0, returns 1 if y == 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
