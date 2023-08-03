#include "main.h"

/**
 * get_bit - Returns the value of a given index
 * @n: Number to check
 * @index: Index of bit
 *
 * Return: Value of the ndex
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
