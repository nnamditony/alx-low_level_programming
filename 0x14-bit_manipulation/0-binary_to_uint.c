#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Pointer to the string of 0 and 1
 *
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decVal = 1, total = 0;
	unsigned int slen;
	int i;

	if (b == NULL)
		return (0);
	slen = strlen(b);
	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += decVal;
		decVal *= 2;
	}
	return (total);
}
