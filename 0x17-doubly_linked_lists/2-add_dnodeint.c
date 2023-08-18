#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: Pointer to the head node
 * @n: Data value of element
 *
 * Return: Address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new_node->next = h;

	if (h != NULL)
		h->prev = new_node;
	*head = new_node;


	return (new_node);

}
