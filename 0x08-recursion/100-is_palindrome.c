#include "main.h"
/**
 * palind - is_palindrome
 * @s: string
 * @start: int
 * @end: int
 * @pair: int
 * Return: 0 or 1
 */
int palind(char *s, int start, int end, int pair)
{
if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
return (1);
else if (s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, pair));
}

/**
 * last_index - returns the last index of a string
 * @s: string
 * Return: int
 */
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;
return (n);
}

/**
 * is_palindrome - check if a string is a plindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
int end = last_index(s);
return (palind(s, 0, end - 1, end % 2));
}
