#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index index of list
 * @head: A pointer to the first node on the list.
 * @index: Index of node to be deleted.
 *
 * Return: Returns 1 (success) 0r -1 (failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	while (current != NULL && i < index)
	{
		temp = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (temp == NULL)
	{
		*head = current->next;
	}
	else
	{
		temp->next = current->next;
	}
	free(current);
	return (1);
}
