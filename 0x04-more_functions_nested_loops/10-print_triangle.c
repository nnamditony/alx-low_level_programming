#include "main.h"
/**
 * print_triangle - a function that prints a triangle.
 * @size: Size of the triangle.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (z = size; z >= x; z--)
			_putchar(' ');
		for (y = -1; y < x; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
