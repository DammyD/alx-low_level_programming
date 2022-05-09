#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of string 2
 *
 * Return: Pointer to allocated memory of s1 + nbytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *p;
	char *nul = "";

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0, l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	if (n < l2)
		l2 = n;

	p = malloc(sizeof(char) * (l1 + l2 + 1));

	if (p == NULL)
		return (0);

	for (i = 0; i < l1; i++)
		p[i] = s1[i];

	for (i = 0, j = l1; i < l2; j++, i++)
		p[j] = s2[i];

	p[j] = '\0';

	return (p);
}
