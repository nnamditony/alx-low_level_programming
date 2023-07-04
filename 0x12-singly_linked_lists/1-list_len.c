#include "lists.h"
#include <stdio.h>
/**
 * list_len - Returns number of elements in a linked list
 * @h: Pointer to the head node.
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;

	while (h->next != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
