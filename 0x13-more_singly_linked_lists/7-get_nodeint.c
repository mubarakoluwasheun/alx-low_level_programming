#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return,
 * starting at 0
 *
 * Return: Returns pointer to the nth node, or NULL if the node
 * does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
