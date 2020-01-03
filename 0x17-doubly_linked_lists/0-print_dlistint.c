#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list
 * @h: Head pointer at the begining of the list
 * Return: number of Nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int index;

    for (index = 0; h != NULL; index++, h = h->next)
    {
        // h = h->next;
        printf("%d\n", h->n);
    }

    return (index);
}
