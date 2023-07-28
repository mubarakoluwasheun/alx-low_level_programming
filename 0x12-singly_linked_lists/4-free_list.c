#include "lists.h"

/**
 * free_list - A function that frees list
 * @head: A pointer to the head of the list
 *
 * Return: No return
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
