#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	if (head == NULL || index >= (unsigned int)head->n)
		return NULL;

	for (i = 0; i < index; i++)
		current = current->next;

	return current;
}
