#include "main.h"
/**
 * _strpbrk - locates the first occurence in the string
 * @s: pointer to char params
 * @accept: characters that could be matched
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
int c;
while (*s)
{
for (c = 0; accept[c]; c++)
{
if (*s == accept[c])
{
return (s);
}
}
s++;
}
return (NULL);
}
