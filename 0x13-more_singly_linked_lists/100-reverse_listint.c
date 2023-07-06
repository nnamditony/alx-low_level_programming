#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the first node of the list
 *
 * Return: Returns a pointer to the first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;

	while (curr != NULL)
	{
		listint_t *next = curr->next;

		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
