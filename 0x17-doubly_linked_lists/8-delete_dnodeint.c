#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * list
 * @head: head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	dlistint_t *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	if (tmp->next == NULL)
		return (-1);

	prev = tmp->prev;
	prev->next = tmp->next;
	tmp->next->prev = prev;
	free(tmp);

	return (1);
}
