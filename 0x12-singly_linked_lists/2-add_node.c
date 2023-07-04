#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list
 * @head: Head node
 * @str: New data to be added
 *
 * Return: A pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_new = malloc(sizeof(list_t));

	if (node_new == NULL)
	{
		return (NULL);
	}
	node_new->str = strdup(str);
	node_new->len = strlen(str);
	node_new->next = *head;
	*head = node_new;

	return (node_new);
}
