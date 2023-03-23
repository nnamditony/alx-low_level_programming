#include "main.h"
/**
 * print_most_numbers - A function that prints numbers 0 to 9
 *excluding 2 and 4.
 * Return: Always o.
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
