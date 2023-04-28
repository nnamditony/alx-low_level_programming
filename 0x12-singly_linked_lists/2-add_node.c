#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Head node.
 * @str: New data to be added.
 *
 * Return: A pointer to the new element or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
