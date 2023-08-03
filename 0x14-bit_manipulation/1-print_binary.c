#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to be printed in binary
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i, incr = 0;

	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			incr++;
		}
		else if (incr)
			_putchar('0');
	}
	if (!incr)
		_putchar('0');
}
