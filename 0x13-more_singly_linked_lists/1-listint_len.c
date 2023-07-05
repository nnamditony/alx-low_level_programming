#include "lists.h"

/**
 * listint_len - Returns the number of elements in listint_t list
 * @h: Pointer to head node
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
