#include "lists.h"

/**
 * pop_listint - A function that deletes the node of
 * a list
 * @head: double pointer to the head of the list
 *
 * Return: Returns the head node's data (n), or
 * 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
