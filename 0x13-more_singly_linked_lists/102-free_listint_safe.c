#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list.
 * @head: Pointer to the first node in the list.
 *
 * Return: Rrturns the size of the list that was freed.
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		current = next;
	}

	*head = NULL;
	return count;
}
