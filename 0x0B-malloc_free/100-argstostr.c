#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count in main
 * @av: argument vector
 *
 * Return: Pointer
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int l, lt, i, j, k;
	l = 0; k = 0; lt = 0;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0; i < ac; i++)
	{

		while (av[i][lt])
			lt++;
		l += lt + 1;
	}
	s = malloc((l + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{

		while (av[j][lt])
		{
			*(s + k) = av[j][lt];
			k++;
			lt++;
		}
		*(s + k) = '\n';
		k++;
	}
	*(s + k) = '\0';

	return (s);
}
