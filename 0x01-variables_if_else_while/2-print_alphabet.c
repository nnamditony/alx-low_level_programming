#include <stdio.h>
/**
 * main - Entry point
 * A program that prints the alphabets in lowercase.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
