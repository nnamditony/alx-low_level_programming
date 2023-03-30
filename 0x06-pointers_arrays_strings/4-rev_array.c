#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - A function that reverses-
 * the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements ofthe array.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	char c;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
