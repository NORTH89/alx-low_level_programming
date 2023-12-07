#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
