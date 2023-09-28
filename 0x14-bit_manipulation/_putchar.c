#include <stdio.h>
#include <unistd.h>

/**
 * _putchar- a function takes a character c as an argument.
 *@c: an argument
 * Return: return value
 * Author: Benedict Eneluwe
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
