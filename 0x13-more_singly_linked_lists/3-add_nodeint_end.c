#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a node at the beggining of a list.
 * @head: Pointer to the current first element of the list.
 * @n: Number to initialize the new element.
 * Return: Pointer to the new first element or 0 if it fails.
 */

#include <stdio.h>
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
		}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		listint_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	return (new_node);
}
