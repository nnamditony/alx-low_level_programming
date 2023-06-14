#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: size of the array.
 * @c: The Array to be created.
 *
 * Return: Returns a pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char * ar;

	ar = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
