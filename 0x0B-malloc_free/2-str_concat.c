#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int n = 0, m = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	s3 = malloc(sizeof(char) * (length1 + length2 + 1));
	if (s3 == NULL)
		return (NULL);

	n = 0;
	m = 0;

	if (s1)
	{
		while (n < length1)
		{
			s3[n] = s1[n];
			n++;
		}
	}

	if (s2)
	{
		while (n < (length1 + length2))
		{
			s3[n] = s2[m];
			n++;
			m++;
		}
	}
	s3[n] = '\0';

	return (s3);
}
