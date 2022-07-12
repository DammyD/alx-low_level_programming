#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: A string
 * @src: A string
 * @n: int
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
for (j = 0; j < 1000; j++)
{
if (dest[j] == '\0')
{
break;
}
	i++;
}

for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
