#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer data stored in the node
 * @prev: pointer to the previous node in the list
 * @next: pointer to the next node in the list
 *
 * Description: a node structure for a doubly linked list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

#endif /* LISTS_H */
