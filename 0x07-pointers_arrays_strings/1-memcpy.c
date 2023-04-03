#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - A function that copies memory area.
 * @dest: Destination to copy to.
 * @src: Source to copy from.
 * @n: number of bytes to copy.
 * Return: returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

