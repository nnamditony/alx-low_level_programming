#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rot13 - A function that encodes a string using rot13.
 * @n: The string to be encoded in rot13.
 * Return: Always 0.
 */
char *rot13(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] >= 65 && n[i] <= 77) || (n[i] >= 97 && n[i] <= 109))
		{
			n[i] = n[i] + 13;
		}
		else if ((n[i] >= 78 && n[i] <= 90) || (n[i] >= 110 && n[i] <= 122))
		{
			n[i] = n[i] - 13;
		}
		else
		{
			n[i] = n[i];
		}
	}
	return (n);
}
