#include "main.h"

/**
 * flip_bits - Returns number of bits needed to flip to get
 * from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int results;
	int count = 0;

	results = n ^ m;

	while (results > 0)
	{
		count++;
		results &= (results - 1);
	}
	return (count);
}
