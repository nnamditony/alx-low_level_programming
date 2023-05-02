#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to the first node in the list.
 * @idx: The index of the new node
 * @n: 
 * Return: Returns the address of the new node.
 */
 listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i = 1;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);

}
