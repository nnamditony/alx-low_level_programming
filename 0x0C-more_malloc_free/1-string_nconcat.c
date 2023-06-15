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
	unsigned int l, l1;
	char *p;

	l = strlen(s1) + strlen(s2) + 1;
	l1 = strlen(s1) + n + 1;

	/*if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}*/
	if (s1 == NULL || s2 == NULL)
		return (" ");
	if (n < strlen(s2))
		p = malloc(l1 * sizeof(char));
	else
		p = malloc(l * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		p[i] = s1[i];
	for (i = 0; i < strlen(s2); i++)
		p[strlen(s1) + i] = s2[i];

	p[strlen(s1) + i + 1] = '\0';

	return (p);
	free (p);
}
