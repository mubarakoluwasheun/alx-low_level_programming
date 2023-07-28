#include "lists.h"

/**
 * add_node - A function that adds a new node
 * at the beginning of a list
 * @head: A pointer to a pointer to the head of
 * the linked list
 * @str: A pointer to the string that should be
 * stored in the new node
 *
 * Return: Retuens a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
