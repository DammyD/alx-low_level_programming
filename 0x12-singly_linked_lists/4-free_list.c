#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a linked list
 * @head: the head of a linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
