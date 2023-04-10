#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints that prints all arguments it receives.
 * @argc: The argument counter.
 * @argv: The array of pointer to the arguments.
 *
 * Return: always 0 (success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
