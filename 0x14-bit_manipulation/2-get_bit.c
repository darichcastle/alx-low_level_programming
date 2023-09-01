#include "main.h"

/**
* get_bit - Gives the value of a bit at a given index.
* @n: Number to evaluate.
* @index: Index to look for.
* Return: Bit at index on number.
*
* Author: Benedict Eneluwe
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(n) * 8)
	{
		return (1);
	}
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
