#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - A function that frees a list_t list.
 * @head: A pointer to the head node.
 *
 * Return: A pointer.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp =head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
