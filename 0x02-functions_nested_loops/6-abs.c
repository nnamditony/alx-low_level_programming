#include "main.h"
/**
 * _abs - A function that computes the absolute value of an integer.
 * @n: The number whose absolute value of last digit is computed.
 * Return: The last digit of the integer.
 */
int _abs(int n)
{

	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
