#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of array.
 * @array: Array of function for execution.
 * @size: Size of array.
 * @action: Pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
