#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v, unsigned int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(v);
	printf("\n");
}
