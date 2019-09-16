#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the element inside the listint_t list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int NumberOfNodes = 0;

	while (h != NULL)

	{
		printf("%d\n", h->n);
		h = h->next;
		NumberOfNodes += 1;
	}

	return (NumberOfNodes);
}
