#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: The number of times the \ should be printed.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
