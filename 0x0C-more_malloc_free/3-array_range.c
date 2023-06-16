#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers.
 * @min: Minimun value of array.
 * @max: Maximum value of array.
 *
 * Return: Returns a pointer or a NULL.
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
