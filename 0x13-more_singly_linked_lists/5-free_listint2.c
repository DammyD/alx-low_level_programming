#include "lists.h"
#include <stdlib>
/**
 * free_listint2 - a function that frees a linked list
 * @head: the head of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head == NULL)
		return (NULL);
	temp2 = (*head);

	while (temp2 != NULL)
	{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
	}
	*head = NULL;
}
