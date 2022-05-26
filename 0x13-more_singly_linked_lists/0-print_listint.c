#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the linked list elements
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
