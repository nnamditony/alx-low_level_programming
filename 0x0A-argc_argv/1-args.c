#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of argument passed into it
 * @argc: Argument counter
 * @argv: Array of pointer to the agument.
 * Return: Always 0 success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
