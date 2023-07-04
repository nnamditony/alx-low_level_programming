#include "lists.h"
/**
 * add_node_end - Adds a node at the end of list_t list
 * @head: The head node
 * @str: The node to be added to the list.
 *
 * Return: Pointer to the address of the new element .
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new = *head;

		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = new_node;
	}
	return (new_node);
}
