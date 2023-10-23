#ifndef LISTS_H
#define LISTS_H

/*data structure for singly linked list*/
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/** Function that prints all the elements of a listint_t list */
size_t print_listint(const listint_t *h);

#endif /* lists.h */
