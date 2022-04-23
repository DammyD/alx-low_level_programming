#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: A pointer
 * @src: A pointer
 * @n: int
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int m;

for (m = 0; src[m] != '\0' && m < n; m++)
{
dest[m] = src[m];
}

for (; m < n; m++)
{
dest[m] = '\0';
}
return (dest);
}
