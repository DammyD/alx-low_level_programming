#include "main.h"
#include <stdio.h>
/**
 *main - prints name of the program
 *
 *@argc: counts number of params
 *@argv: pointer of array
 *
 *Return: Always 0 (success)
 *
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
