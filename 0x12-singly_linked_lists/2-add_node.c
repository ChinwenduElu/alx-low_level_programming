#include "lists.h"

/**
* add_node - adds new node at the beginning of list_t list
* @head: list head
* @str: string
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t no_of_char;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (no_of_char = 0; str[no_of_char]; no_of_char++)
		;

	newnode->len = no_of_char;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
