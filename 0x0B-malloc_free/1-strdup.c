#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter.
 * @str: The string parameter.
 *
 * Return: Returns pointer or NULL.
 */
char *_strdup(char *str)
{
	unsigned int i, n = 0;
	char* s;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;

	s = (char *)malloc(sizeof(char) * i + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		s[n] = str[n];
	}
	return (s);
}
