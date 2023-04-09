#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers.
 * @argc: The argument counter.
 * @argv: The array of pointer to the arguments.
 *
 * Return: always 0 (success).
 */

int main(int argc, char *argv[])
{
	int num1, num2, i, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product = num1 * num2;
		}
		printf("%d\n", product);
	}
	return (0);
}
