#include "main.h"

/**
 * flip_bits - Returns number of bits need to flip to get from
 * one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	int count = 0;

	result = n ^ m;
	while (result > 0)
	{
		count++;
		result &= (result - 1);
	}
	return (count);
}
