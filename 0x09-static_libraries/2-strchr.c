#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - A function that locates a character in a string
 * @s: String to be searched.
 * @c: Character to be located.
 * Return: returns a pointer if character is located
 * else returns a null.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
