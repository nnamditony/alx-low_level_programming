#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: Number of integers to be passed to function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list y;
	unsigned int i;

	va_start(y, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(y, unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(y);
	printf("\n");
}
