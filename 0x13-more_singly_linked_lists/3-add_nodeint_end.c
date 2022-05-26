#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: the starting of linked list
 * @n: integer
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
		listint_t *temp2;

		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->n = n;
			temp->next = NULL;
		if (*head == NULL)
		{
			*head = temp;
			return (temp);
		}
		temp2 = *head;

		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
		return (temp);
}

