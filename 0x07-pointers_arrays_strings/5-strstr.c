#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strstr - A function that locates a substring.
 * @haystack: The string to be search.
 * @needle: The substring to be searched for.
 * Return: returns a pointer to the beginning of a
 * located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
