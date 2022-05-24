#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the linked list elements
 * @h: the head of linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0, len;
	char *s;
	const list_t *temp = h;

	while (temp != NULL)
	{
		s = temp->str;
		if (s == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			n++;
			continue;
		}
		len = temp->len;
		printf("[%lu] %s\n", len, s);
		temp = temp->next
			n++;
	}
	return(n);
}
