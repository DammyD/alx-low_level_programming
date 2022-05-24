#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the number of elements in a linked list
 * @h: the head of the linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
			n++;
	}
	return (n);
}
