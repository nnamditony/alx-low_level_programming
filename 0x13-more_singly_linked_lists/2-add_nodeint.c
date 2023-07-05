#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning.
 * @head: double pointer to the head pointer
 * @n: Value of node
 *
 * Return: A pointer to the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
