#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (count);

	for (temp = h; temp->prev != NULL; temp = temp->prev)
		;

	for (; temp != NULL; temp = temp->next)
		count++;

	return (count);
}
