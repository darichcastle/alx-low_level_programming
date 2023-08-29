#include "lists.h"
/**
 * free_listint2-frees a linked list at the tail
 * @head: - Pointer to the first element to be freed
 * current - points to the headis a pointer that starts at the head of the list
 * node before we move to the next one
 * Author: Benedict Eneluwe
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		current = current->next;
	}
	head = NULL;
}
