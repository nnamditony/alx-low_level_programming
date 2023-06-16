#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to malloc.
 * @old_size: Old memory size.
 * @new_size: Size of memory to be reallocated.
 *
 * Return: Returns a pointer or a NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	ptr = realloc(ptr, new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
	free(ptr);
}
