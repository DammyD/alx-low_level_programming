#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at the beginning of a linked list
 * @head: the head of the linked list
 * @n: integer
 * Return: the new added list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
