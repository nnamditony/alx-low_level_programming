#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: The argument counter.
 * @argv: The array of pointer to the arguments.
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
