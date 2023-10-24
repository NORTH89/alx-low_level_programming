#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	*h = NULL;

	return (count);
}
