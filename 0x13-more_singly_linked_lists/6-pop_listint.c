#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list
 * #head: the head node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *temp;

	if (head == NULL)
		return (0);
	temp = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(temp);
	}
	else
		i = 0;
	return (i);
}
