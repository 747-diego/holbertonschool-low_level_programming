#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (!NewNode)
		return (NULL);

	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;

	return (NewNode);
}
