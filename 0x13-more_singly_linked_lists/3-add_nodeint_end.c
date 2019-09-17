#include "lists.h"

/**
* add_nodeint_end - Write a function that adds a new node at the end of a list
* @head: pointer to the begining of the list
* @n: elements it in the array
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode;
	listint_t *TemporaryNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
		*head = NewNode;
	else
	{

		TemporaryNode = *head;
		while (TemporaryNode->next != NULL)
		{
			TemporaryNode = TemporaryNode->next;
		}
		TemporaryNode->next = NewNode;
	}
	return (NewNode);
}
