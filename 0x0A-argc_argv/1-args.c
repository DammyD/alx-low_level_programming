#include "main.h"
#include <stdio.h>
/**
 *main - prints the number of arguements passed to it
 *
 *@argc: counts the number of params
 *@argv: array pointer
 *
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv > 0)
	printf("%d\n", argc - 1);
	return (0);
}
