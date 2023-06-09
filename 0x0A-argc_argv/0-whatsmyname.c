#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - A program that Prints its name.
 * @argc: The argument counter.
 * @argv: An array of pointer to the argument
 *
 * Return: Always 0 success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
