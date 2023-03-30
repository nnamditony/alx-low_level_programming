#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - A function that capitalizes all words of a string.
 * @n: The string to be capitalized.
 * Return: Always 0.
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] = n[i] - 32;
			}
		}
		else if (n[i - 1] == ' ')
		{
			if (n[i] >= 'a' && n[i] <= 'z')
			{
				n[i] = n[i] - 32;
			}
		}
	}
	return (n);
}
