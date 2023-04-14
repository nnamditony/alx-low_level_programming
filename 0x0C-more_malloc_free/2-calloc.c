#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using calloc.
 * @nmemb: An array for memory allocation.
 * @size: The size of the array to be allocated memory.
 *
 * Return: Return a pointer or a NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(nmemb) * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
