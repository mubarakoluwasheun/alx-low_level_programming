#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * of a linked list
 * @head: double pointer to the head of the file
 * @index: index of the node that should be deleted
 * starts at 0
 *
 * Return: Returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next = temp->next->next;
	free(temp->next);
	temp->next = next;

	return (1);
}
