#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns sum of all parameters.
 * @n: Number of parameters.
 * Return: Returns sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list y;
	unsigned int i, sum;

	va_start(y, n);
	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(y, unsigned int);
	va_end(y);
	return (sum);
}
