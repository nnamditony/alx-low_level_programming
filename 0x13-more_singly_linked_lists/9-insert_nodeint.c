#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at a given position
 * @head: Pointer to the first node
 * @idx: Index of the new node
 * @n: Data of the new node
 *
 * Return: Returns address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = *head;
	unsigned int y = 1;

	newNode = malloc(sizeof(listint_t));

	if (!newNode || !head)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	while (y < idx)
	{
		temp = temp->next;
		y++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
