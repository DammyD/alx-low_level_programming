#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that adds positive numbers
 *
 *@argc: counts the number of params
 *@argv: array of pointer
 *
 *Return: Always 0 (success)
 *
 */
int main(int argc, char *argv[])
{
int i, j, product;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}

product += atoi(argv[i]);
}
printf("%d\n", product);
return (0);
}
