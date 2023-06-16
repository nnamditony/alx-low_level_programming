#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of memory
 *
 * Return: Returns a pointer or a NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ar[i] = 0;
	return (ar);
}
