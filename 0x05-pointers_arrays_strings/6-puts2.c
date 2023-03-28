#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * with the first character.
 * @str: The string to be printed.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
