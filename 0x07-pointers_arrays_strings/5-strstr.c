#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to a char params
 * @needle: substring to look for
 * Return: a pointer to the beginning of the located substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
char *result = haystack;
char *sub = needle;
while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (result);
}
needle = sub;
result++;
haystack = result;
}
return (0);
}
