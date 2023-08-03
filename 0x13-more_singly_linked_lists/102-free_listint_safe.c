#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: double pointer to the head of the list
 *
 * Return: Returns the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			break;
		}
	}
	free(temp);
	count++;

	*h = NULL;
	return (count);
}
