#include "main.h"
#include <stdio.h>
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: Pointer to pointer
 * @to: pointer to char
 * Retrn: Always 0.
 */void set_string(char **s, char *to)
{
	*s = to;
}
