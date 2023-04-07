#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints its name
 * @argc: The argument counter.
 * @argv: The array of pointer to the arguments.
 *
 * Return: always 0 (success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
