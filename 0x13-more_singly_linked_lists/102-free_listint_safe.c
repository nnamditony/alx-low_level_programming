#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @head: Pointer to the first node in the list
 * Return: Returns the size of the of the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *next, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		current = next;
	}
	*head = NULL;
	return (count);
}
