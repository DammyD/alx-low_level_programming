#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: pointer to a string params
 * @s2: pointer to a string params
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0') && (*s2 == '\0')
{
if (*s2 != '\0' && s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (1);
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s2, s1 + 1));
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
