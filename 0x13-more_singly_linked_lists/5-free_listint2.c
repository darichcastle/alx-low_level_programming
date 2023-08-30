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
	if (head == NULL || *head == NULL)
	return;

	while (*head != NULL)
	{
		listint_t *current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
