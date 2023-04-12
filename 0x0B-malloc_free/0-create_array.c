#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The array to be created.
 *
 * Return: Returns a pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *  str;

	str = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
