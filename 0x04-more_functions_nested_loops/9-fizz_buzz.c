#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * A program that prints numbers from 1 to 100.
 * prints fizz for multiples of 3
 * Prints Buzz for multiples of 5,
 * Prints FizzBuzz for multiples of both 3 and 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
