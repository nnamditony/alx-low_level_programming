#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Function that concatenate two strings.
 * @s1: string 1 to be concatenated.
 * @s2: second string to be concatenated.
 *
 * Return: Returns a pointer to the string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, s = 0;

	str = (char *)malloc(s * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	s = strlen(s1) + strlen(s2) + 1;
	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];

	for (i = 0; i < strlen(s2); i++)
		str[strlen(s1) + i] = s2[i];

	str[s - 1] = '\0';
	return (str);
}
