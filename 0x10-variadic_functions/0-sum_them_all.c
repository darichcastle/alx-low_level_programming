#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int p, ...)
{
	unsigned int i;
	int dsum = 0;
	va_list dlist;

	va_start(list, p);

	for (i = 0; i < p; i++)
		dsum += va_arg(dlist, int);

	va_end(dlist);

	return (dsum);
}
