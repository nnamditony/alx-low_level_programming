#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - A program that adds positive integers.
* @argc: Argument counter.
* @argv: Argument containing strings
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
