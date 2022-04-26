#include "main.h"
/**
 * _memcpy - copies n bytes from mem area src to mem area dest
 * @dest: pointer to a char params
 * @src: pointer to a char params
 * @n: number of bytes
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
