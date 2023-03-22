#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number.
 * @c: The number whose last digit is printed.
 * Return: last digit of the number c
 */
int print_last_digit(int c)
{
	int ld;

	ld = c % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
