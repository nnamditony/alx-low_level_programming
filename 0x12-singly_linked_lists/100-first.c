#include "lists.h"

void first(void)__attribute__((constructor));

/**
 * first - Prints before main function execution
 * Return: Void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
