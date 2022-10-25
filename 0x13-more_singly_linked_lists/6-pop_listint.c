#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: head of listd: head of list
* Return:  the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	head_data = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (head_data);
}
