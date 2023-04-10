#include "main.h"
#include <string.h>
/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: The string that is returned.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
