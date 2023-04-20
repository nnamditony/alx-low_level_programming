#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - A function that prints name.
 * @name: Name to be printed.
 * @f: Pointer to the function.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
