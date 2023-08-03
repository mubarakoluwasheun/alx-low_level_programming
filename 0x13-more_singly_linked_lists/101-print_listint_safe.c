#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0, i;
    const listint_t **array;

    array = malloc(sizeof(listint_t *) * 1024);
    if (array == NULL)
        exit(98);

    while (head != NULL)
    {
        for (i = 0; i < count; i++)
        {
            if (array[i] == head)
            {
                printf("-> [%p] %d\n", (void *)head, head->n);
                free(array);
                return (count);
            }
        }
        printf("[%p] %d\n", (void *)head, head->n);
        array[count] = head;
        count++;
        head = head->next;
    }

    free(array);
    return (count);
}
