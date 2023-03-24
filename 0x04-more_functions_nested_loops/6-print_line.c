#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * Return: Always o.
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(95);
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');

}
