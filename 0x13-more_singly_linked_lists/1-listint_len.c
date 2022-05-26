#include "lists.h"

/**
 * listint_len - prints the number of linked lists elements
 * @h: the head of the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
