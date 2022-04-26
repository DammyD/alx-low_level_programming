#include "main.h"
/**
 * _memset - fills strings with constant char b to n bytes
 * @s: pointer to char params
 * @b: constant char
 * @n: number of bytes
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
