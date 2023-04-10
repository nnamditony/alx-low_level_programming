#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncat - A function that concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to be concatenated.
 * Return: Returns dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i < l2 - l2 + n; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
