#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: size of memory.
 * Return: Returns a pointer or a NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int size;
	unsigned int size1;
	unsigned int n1 = strlen(s1);
	unsigned int n2 = strlen(s2);

	size = n1 + n + 1;
	size1 = n1 + n2 + 1;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (n < n2)
	{
		s = (char *) malloc(sizeof(char) * size);
	}
	else
	{
		s = (char *) malloc(sizeof(char) * size1);
	}
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n1; i++)
		s[i] = s1[i];
	for (i = 0; i < n2; i++)
		s[n1 +i] = s2[i];

	s[n1 + i + 1] = '\0';
	return (s);

}
