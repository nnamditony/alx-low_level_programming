#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: A pointer to the first node of the list.
 * @index: The index of the node starting at 0.
 *
 * Return: Returns the nth node of the list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (!current)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
