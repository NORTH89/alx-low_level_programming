#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
