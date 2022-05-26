#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that access the nth element
 * @head: the head of a linked list
 * @index: the index needed to access the nth element
 * Return: the nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
