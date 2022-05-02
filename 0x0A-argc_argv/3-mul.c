#include <stdio.h>
#include <stdlib.h>

/**
 * main - programs that multiplies two numbers
 *
 * @argc: Counts the number of params
 * @argv: Pointer of array of pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		j = 1;
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
	}
	return (1);
}
