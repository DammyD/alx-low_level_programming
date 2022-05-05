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
char *p;
int l, lt, i, j, k;

if (ac == 0 || av == NULL)
return (0);
l = 0; k = 0;

for (i = 0; i < ac; i++)
{
lt = 0;

while (av[i][lt])
lt++;
l += lt + 1;
}
p = malloc((l + 1) * sizeof(char));

if (p == 0)
return (0);

for (j = 0; j < ac; j++)
{
lt = 0;
while (av[j][lt])
{
*(p + k) = av[j][lt];
k++;
lt++;
}
*(p + k) = '\n';
k++;
}
*(p + k) = '\0';

return (p);
}
