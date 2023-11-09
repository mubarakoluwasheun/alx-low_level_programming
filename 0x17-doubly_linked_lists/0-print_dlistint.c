#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (count);

	for (temp = h; temp->prev != NULL; temp = temp->prev)
		;

	for (; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		count++;
	}
	return (count);
}
