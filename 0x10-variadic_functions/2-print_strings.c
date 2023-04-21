#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings.
 * @separator: string to be printed between strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list y;
	unsigned int i;
	char *str;

	va_start(y, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(y, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(y);
	printf("\n");
}
