#include "lists.h"

/**
 * free_listint2 - A function that frees a list2
 * @head: A pointer to the head of the list
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
