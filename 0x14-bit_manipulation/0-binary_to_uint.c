#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string containing binary digits
 * Return: converted decimal number or 0 if there are invalid characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_total = 0, binary_power = 1;
	int binary_length;

	if (b == NULL)
		return (0);

	for (binary_length = 0; b[binary_length]; binary_length++)
	{
		if (b[binary_length] != '0' && b[binary_length] != '1')
			return (0);
	}

	for (binary_power = 1, decimal_total = 0, binary_length--;
		binary_length >= 0; binary_length--, binary_power *= 2)
	{
		if (b[binary_length] == '1')
			decimal_total += binary_power;
	}

	return (decimal_total);
}
