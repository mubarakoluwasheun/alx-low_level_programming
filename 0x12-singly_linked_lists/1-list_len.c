#include "lists.h"

/**
 * list_len - A function that returns the number
 * of elements in a linked list
 * @h: a pointer to the node
 *
 * Return: Returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
