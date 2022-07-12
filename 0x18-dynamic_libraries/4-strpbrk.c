#include "main.h"
/**
 * _strpbrk - locates the first matching char in string
 * @s: pointer to char params
 * @accept: characters that could be matched
 * Return: pointer to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return (0);
}
