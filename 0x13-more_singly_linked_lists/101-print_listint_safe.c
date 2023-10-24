#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
