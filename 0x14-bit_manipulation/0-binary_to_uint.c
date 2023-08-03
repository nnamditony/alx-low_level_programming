#include "main.h"

/**
 * binary_to_uint - Function converts binary to unsigned int
 * @b: Pointer to string of bits to be converted
 *
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int slen, dVal = 1, total = 0;
	int i;

	if (b == NULL)
		return (0);

	slen = strlen(b);
	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += dVal;
		dVal *= 2;
	}
	return (total);
}
