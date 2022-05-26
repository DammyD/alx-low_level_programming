#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - the sum of all the data (n) in a linked list
 * @head: the head of the linked list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
