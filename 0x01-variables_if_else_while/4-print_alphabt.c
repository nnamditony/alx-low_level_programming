#include <stdio.h>
/**
 * main - Entry point.
 * A program that prints the alphabets in lowercase but excludes e and q.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
