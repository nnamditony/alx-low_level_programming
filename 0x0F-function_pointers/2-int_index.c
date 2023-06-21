#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer.
 * @array: Array to search for an integer.
 * @size: Number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values
 * Return: Returns the index of the first element for
 * which the cmp function does not return 0,
 * if no element matches, return -1,
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
