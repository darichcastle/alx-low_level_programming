#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: List to print.
  * Return: Number of nodes of the list.
  */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("Node [%d]: [%d]\n", i, h->n);
                i++;
		h = h->next;
	}
	return (i);
}
