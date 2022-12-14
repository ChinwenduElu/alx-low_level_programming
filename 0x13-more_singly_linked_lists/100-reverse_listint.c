#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: head of a list
* Return: pointer to the first node.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = j;
		i = *head;
		*head = j;
	}

	*head = i;
	return (*head);
}
