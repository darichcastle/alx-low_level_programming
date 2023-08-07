#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int n, m, l, size;
	char *arg;

	size = 0;
	l = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		m = 0;
		while (av[n][m])
		{
			size++;
			m++;
		}
		size++;
		n++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		m = 0;
		while (av[n][m])
		{
			arg[l] = av[n][m];
			m++;
			l++;
		}
		arg[l] = '\n';
		l++;
		n++;
	}
	arg[l] = '\0';
	return (arg);
}
