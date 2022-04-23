#include "main.h"
/**
 * _strcat - prints two strings that concatenates
 * @dest: First string
 * @src: Second string
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{

int i, j;
i = 0; j = 0;
while (dest[i] != '\0')

i++;
while (dest[j] != '\0')

{

dest[i] = src[j];
i++;
j++;
}
dest[i] '\0';

return (dest);
}
