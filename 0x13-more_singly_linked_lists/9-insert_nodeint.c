#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a node at
 * a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node
 * should be added, starting at 0
 * @n: integer to be included in the node
 *
 * Return: Returns the address of the new node, or NULL if it
 * failed or if it is not possible to add the new node at index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
