#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b:char string
 * Return: return unsigned integer representation of the binary string
 *
 * Author: Benedict Eneluwe
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	int i = 0;

	if (b == NULL)
	{
		return (0);
	}


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}
