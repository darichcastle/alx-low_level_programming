#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: - Pointer to the first element to be freed
 * current - points to the headis a pointer that starts at the head of the list
 * to_return - temporary pointer that holds the address of the current
 * node before we move to the next one
 * Author: Benedict Eneluwe
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *to_return;

	while (current != NULL)
	{
		to_return = current;
		current = current->next;
		free(to_return);
	}
}
