#include "lists.h"

/**
* _strlen - find string length
* @str: string
* Return: string length
*/

int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
* add_node - adds new node at the end of list_t list
* @head: list head
* @str: string
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;

		while (temp->next != NULL)
		temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
