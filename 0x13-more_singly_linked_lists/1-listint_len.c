#include "lists.h"

/**
* listint_len - function that returns the number of elements ina listint_t list
* @h: pointer to the first element in the listint_t list
* Return: Number of Elemnts
*/

size_t listint_len(const listint_t *h)
{
	unsigned int NumberOfElements = 0;

	while (h != NULL)

	{
		h = h->next;
		NumberOfElements += 1;
	}

	return (NumberOfElements);
}
