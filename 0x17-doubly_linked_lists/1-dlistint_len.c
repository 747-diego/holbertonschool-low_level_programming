#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a linked dlistint_t list
 * @h: Head pointer at the begining of the list
 * Return: number of Nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
    int index;

    for (index = 0; h != NULL; index++, h = h->next)
        ;
    return (index);
}
