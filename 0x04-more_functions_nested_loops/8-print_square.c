#include "main.h"
/**
 * print_square - A function that a square.
 * @size: Number of squares to print.
 *
 * Return: Always o.
 */
void print_square(int size)
{
	int y, x;

	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
