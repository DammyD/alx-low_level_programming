#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: A pointer
 * Return: *s
 */
char *cap_string(char *s)
{

int b = 1, c, check;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

if (s[0] > 96 && s[0] < 123)
s[0] -= 32;

while (s[b] != '\0')
{
if (s[b] > 96 && s[b] < 123)
{
c = 0;
check = 0;

while (check == 0 && c < 13)
{
if (s[b - 1] == a[c])
{
check = 1;
}
c++;
}
if (check == 1)
{
s[b] -= 32;

}
}
b++;
}
return (s);
}
