#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints n elements of an array of integers.
 * @a: The array whose elements are to be printed.
 * @n: The number elements to be printed.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
