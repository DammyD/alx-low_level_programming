#include "main.h"
/**
 * _strlen_recursion - size
 * @s: string params
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (0);
}
return (1 + _strlen_recursion(++s));
}

/**
 * palind - is_palindrome
 * @s: string params
 * @l: position
 * Return: 1 or 0
 */
int palind(char *s int l)
{
if (l < 1)
{
return (1);
}
if (*s == *s(s + l))
{
return (palind(s + 1, l - 2));
}
return (0);
}

/**
 * is_palindrome - check if a string is a plindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (palind(s, len - 1));
}
