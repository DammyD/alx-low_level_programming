#include "main.h"
/**
 * _strchr - locates a character string
 * @s: pointer to a char params
 * @c: char params to be found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
