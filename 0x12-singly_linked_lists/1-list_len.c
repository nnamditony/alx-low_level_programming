#include <stdio.h>
#include "lists.h"
/**
 * list_len - Function that returns number of elements in a linked list
 * @h: Pointer to the address of next node
 *
 * Return: Number of elements in the list.
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
