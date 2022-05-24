#include "lists.h"
#include "stdlib.h"
#include "string.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: the head linked list
 * @str: a string
 * Return: added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	char *dupstr;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	dupstr = strdup(str);
	if (dupstr == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;
	temp->str = dupstr;
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	temp2 = *head;
	while (temp2->next != NULL)
		temp2 = temp2->next;
	temp2->next = temp;
	return (*head);
}
