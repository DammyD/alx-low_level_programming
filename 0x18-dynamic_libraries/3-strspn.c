#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search for substring
 * @accept: substring of accepted char
 * Return: length of occurence
 */
unsigned int _strspn(char *s, char *accept)
{

unsigned int b = 0;
char *t = accept;
while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
b++;
break;
}
if (!(*--accept))
break;
accept = t;
}
return (b);
}
