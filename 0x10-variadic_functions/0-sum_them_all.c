#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters passed.
 *
 * Return: Always 0 success.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i, sum = 0;

	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(v, unsigned int);
	}
	va_end(v);
	return (sum);
}
