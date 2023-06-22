#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - A function that prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list y;
	unsigned int i = 0, c = 0, j;
	char *str;
	const char arg[] = "cifs";

	va_start(y, format);
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(y, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(y, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(y, double)), c = 1;
			break;
		case 's':
			str = va_arg(y, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	va_end(y);
	printf("\n");
}
