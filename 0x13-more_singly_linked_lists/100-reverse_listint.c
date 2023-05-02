#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A double pointer to the first node on the list.
 *
 * Return: Returns a pointer to 1st node of reversed list.
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
