#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - A function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: Returns a pointer or a NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, n = 0;

	char *s = (char *)malloc(sizeof(char) * n);

	if (s == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	n = strlen(s1) + strlen(s2) + 1;
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];

	for (i = 0; i < strlen(s2); i++)
		s[strlen(s1) + i] = s2[i];
	s[n - 1] = '\0';
	return (s);
}
