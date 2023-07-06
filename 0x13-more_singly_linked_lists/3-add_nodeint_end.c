#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of listint_t
 * @head: Pointer to the head node
 * @n: Value of new node
 *
 * Return: Returns pointer to the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *ptr;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	ptr = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newNode;

	return (newNode);
}
