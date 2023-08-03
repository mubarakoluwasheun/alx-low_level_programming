#include "lists.h"

/**
 * print_listint_safe - A function that prints a linked list
 * @head: pointer to the head of the list
 *
 * Return: Returns the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;
	const listint_t **addrs;
	size_t i;

	if (head == NULL)
		exit(98);

	addrs = malloc(sizeof(*addrs));
	if (addrs == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			while (head != slow)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
				count++;
			}
			printf("->[%p] %d\n", (void *)slow, slow->n);
			free(addrs);
			return (count);
		}
	}
	while (head)
	{
		for (i = 0; i < count; i++)
			if (addrs[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(addrs);
				return (count);
			}

		printf("[%p] %d\n", (void *)head, head->n);
		addrs[count++] = head;
		addrs = realloc(addrs, sizeof(*addrs) * (count + 1));

		if (addrs == NULL)
			exit(98);
		head = head->next;
	}
	free(addrs);
	return (count);
}
