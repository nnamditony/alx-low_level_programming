#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that multiplies two positive numbers.
 * @argc: argument counter.
 * @argv: An array of strings.
 *
 * Return: alwaays 0 success.
 */
int main(int argc, char *argv[])
{
	int i, num1, num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!isdigit(num1) && !isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = num1 * num2;
		}
		printf("%d\n", mul);
	}
	return (0);
}
