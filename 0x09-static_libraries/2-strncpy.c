#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - A function that copies a string.
 * @dest: The destination.
 * @src: The source.
 * @n: Number of characters to be copied.
 * Return: Returns copied strings to the dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
		return (dest);
	}

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
