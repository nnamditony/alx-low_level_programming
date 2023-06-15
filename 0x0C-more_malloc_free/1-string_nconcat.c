#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: One of strings to concatenate.
 * @s2: Second string to concatenate.
 * @n: Size of memory
 *
 * Return: Returns a pointer or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *p;

	n = strlen(s1) + strlen(s2) + 1;
	p = malloc(n * sizeof(char));

	if (p == NULL)
		return (NULL);

	if (s1 == NULL || s2 == NULL)
		return (" ");

	for (i = 0; i < strlen(s1); i++)
		p[i] = s1[i];
	for (i = 0; i < strlen(s2); i++)
		p[strlen(s1) + i] = s2[i];

	p[n - 1] = '\0';

	return (p);
	free(p);
}
