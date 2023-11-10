#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		current = *h;
		if (current != NULL)
			for (; current->prev != NULL; current = current->prev);

		for (i = 1; current != NULL; current = current->next, i++)
		{
			if (i == idx)
			{
				if (current->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = current->next;
						new_node->prev = current;
						current->next->prev = new_node;
						current->next = new_node;
					}
				}
				break;
			}
		}
	}

	return (new_node);
}
