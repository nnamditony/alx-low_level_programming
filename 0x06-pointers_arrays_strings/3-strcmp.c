#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - A function that compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
