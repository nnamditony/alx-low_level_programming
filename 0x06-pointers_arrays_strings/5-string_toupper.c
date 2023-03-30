#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - A function that changes all lowercase letters of a string -
 * to uppercase.
 * @n: The string to be converted to uppercase.
 * Return: Always 0.
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
