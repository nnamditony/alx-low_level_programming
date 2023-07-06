#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the head node
 * @index:
 * The index of the node
 *
 * Return: Returns the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int count = 0;

	if (!curr)
		return (NULL);

	while (curr != NULL)
	{
		if (count == index)
			return (curr);
		count++;
		curr = curr->next;
	}
	return (curr);
}
