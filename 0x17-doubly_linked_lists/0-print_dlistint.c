#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a doublylinked list
 * @h: head pointer points at 1st node
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int index;

    for (index = 0; h != NULL; index++, h = h->next)

    {
        /* h = h->next; index pointer of nodes must be
        inside FOR loop to iterate through the list */
        printf("%d\n", h->n);
    }

    return (index);
}