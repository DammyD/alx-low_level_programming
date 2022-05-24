#include "lists.h"
#include <string.h>
#include <stdlib>
/**
 * add_node - adds node to the head of the linked list
 * @head: the head of the linked list
 * @str: the string
 * Return: the new added list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		new = *head;
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		return (new);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	(*head) = new;
	return (*head);
}
