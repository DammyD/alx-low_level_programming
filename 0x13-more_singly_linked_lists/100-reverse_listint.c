#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list
 * @head: head of the node
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	*head = prev;
	return (*head);
}

