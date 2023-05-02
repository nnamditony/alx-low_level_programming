#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: double pointer to the head node.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	*head = NULL;
}
