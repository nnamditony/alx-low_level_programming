#include <stdio.h>
/**
 * main - A program that prints the alphabets in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
