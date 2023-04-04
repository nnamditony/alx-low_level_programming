#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk - A function that searches a string for a set of bytes
 * @s: The string to be searched
 * @accept: the set of bytes to be searched for.
 * Return: If a set is matched - a pointer to the matched byte.
 * if no set is matched - null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
