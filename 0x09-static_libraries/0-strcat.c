#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - A function that concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: Returns a pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, l1, l2;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (dest);
}
