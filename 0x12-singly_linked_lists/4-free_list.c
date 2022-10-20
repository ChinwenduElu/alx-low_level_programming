#include "lists.h"

/**
* free_list - frees list_t list
* @head: list head
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
