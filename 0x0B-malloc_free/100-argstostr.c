#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenates all arguments of program.
 * @ac: integer argument.
 * @av: string argument.
 *
 * Return: Returns a pointer to a new string or NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;

	int i, j, n = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
	}
	n += ac;

	str = (char *) malloc(sizeof(char) * n + 1);

	if (str == NULL)
		return (NULL);

	/*n = ((strlen(av) + 1) + (ac[i] + 1));*/

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		if (str[index] == '\0')
		{
			str[index++] = '\n';
		}
	}
	return (str);
}
