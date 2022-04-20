#include "main.h"
/**
 * _puts - printts a string followed by a new line
 * @str: A string to print
 * Return: Always 0
 */
void _puts(char *str)
{
char *c;
int a;
c = str;

for (a = 0; c[a]; a++)
{
_putchar (c[a]);
}
_putchar('\n');
}
