#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data(n) of a list
 * @head: A pointer to the first node of the list.
 *
 * Return: Returns sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!temp)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
