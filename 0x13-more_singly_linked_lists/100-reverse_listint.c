#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 * @head: pointer to the head of the list
 *
 * Return: the address of the new head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
