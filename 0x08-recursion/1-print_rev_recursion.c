#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{

	if (*s)

	_print_rev_recursion(s + 1 );
	_putchar (*s);
}
