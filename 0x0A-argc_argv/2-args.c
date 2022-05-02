#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed to it.
 *
 * @argc: Counts the number of params
 * @argv: Pointer of array of pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
