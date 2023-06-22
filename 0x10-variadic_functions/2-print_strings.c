#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by newline.
 * @separator: Strings to be printed between strings.
 * @n: Number of strings passed to function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	char *str;

	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(v, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(v);
	printf("\n");
}
